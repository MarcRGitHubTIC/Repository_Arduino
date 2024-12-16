#include <WiFi.h>
#include <WiFiClientSecure.h>
#include <PubSubClient.h>
#include <SPI.h>
#include <MFRC522.h>
#include "secrets.h"

// Configuración de AWS IoT
const char* mqtt_server = "a19wrib6a67xmn-ats.iot.us-east-1.amazonaws.com";

const int mqtt_port = 8883;
const char* mqtt_client_id = "ESP3_001";
const char* mqtt_topic = "lector/tarjetas";

// Configuración del RC522
#define SS_PIN 5
#define RST_PIN 0
MFRC522 mfrc522(SS_PIN, RST_PIN);

WiFiClientSecure espClient;
PubSubClient client(espClient);

void setup() {
  Serial.begin(115200);
  SPI.begin();
  mfrc522.PCD_Init();
  setup_wifi();
  client.setServer(mqtt_server, mqtt_port);

  // Configurar certificados
  espClient.setCACert(aws_cert_ca);
  espClient.setCertificate(aws_cert_crt);
  espClient.setPrivateKey(aws_cert_private);

  Serial.println("Inicialización completa");
}

void setup_wifi() {
  delay(10);
  Serial.println();
  Serial.print("Conectando a ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi conectado");
  Serial.println("Dirección IP: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  if (!client.connected()) {
    reconnect();
  }
  client.loop();

  // Leer datos del RC522
  if (mfrc522.PICC_IsNewCardPresent() && mfrc522.PICC_ReadCardSerial()) {
    Serial.println("Tarjeta detectada");
    String payload = "";
    for (byte i = 0; i < mfrc522.uid.size; i++) {
      payload += String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
      payload += String(mfrc522.uid.uidByte[i], HEX);
    }
    payload.trim();
    Serial.print("Datos de la tarjeta: ");
    Serial.println(payload);
    client.publish(mqtt_topic, payload.c_str());
    delay(1000); // Esperar un segundo antes de leer otra tarjeta
  } else {
    Serial.println("No se detectó ninguna tarjeta");
  }
}

void reconnect() {
  while (!client.connected()) {
    Serial.print("Intentando conexión MQTT...");
    if (client.connect(mqtt_client_id)) {
      Serial.println("conectado");
    } else {
      Serial.print("falló, rc=");
      Serial.print(client.state());
      Serial.println(" intentando de nuevo en 5 segundos");
      delay(5000);
    }
  }
}