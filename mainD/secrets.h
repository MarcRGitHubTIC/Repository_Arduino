#ifndef SECRETS_H
#define SECRETS_H

// WiFi credentials
const char* ssid = "Pixel_1444";
const char* password = "pau12345";

// AWS IoT Core credentials
const char* aws_endpoint = "a19wrib6a67xmn-ats.iot.us-east-1.amazonaws.com";


const char* aws_cert_ca = \
"-----BEGIN CERTIFICATE-----\n" \
"MIIDQTCCAimgAwIBAgITBmyfz5m/jAo54vB4ikPmljZbyjANBgkqhkiG9w0BAQsF\n" \
"ADA5MQswCQYDVQQGEwJVUzEPMA0GA1UEChMGQW1hem9uMRkwFwYDVQQDExBBbWF6\n" \
"b24gUm9vdCBDQSAxMB4XDTE1MDUyNjAwMDAwMFoXDTM4MDExNzAwMDAwMFowOTEL\n" \
"MAkGA1UEBhMCVVMxDzANBgNVBAoTBkFtYXpvbjEZMBcGA1UEAxMQQW1hem9uIFJv\n" \
"b3QgQ0EgMTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALJ4gHHKeNXj\n" \
"ca9HgFB0fW7Y14h29Jlo91ghYPl0hAEvrAIthtOgQ3pOsqTQNroBvo3bSMgHFzZM\n" \
"9O6II8c+6zf1tRn4SWiw3te5djgdYZ6k/oI2peVKVuRF4fn9tBb6dNqcmzU5L/qw\n" \
"IFAGbHrQgLKm+a/sRxmPUDgH3KKHOVj4utWp+UhnMJbulHheb4mjUcAwhmahRWa6\n" \
"VOujw5H5SNz/0egwLX0tdHA114gk957EWW67c4cX8jJGKLhD+rcdqsq08p8kDi1L\n" \
"93FcXmn/6pUCyziKrlA4b9v7LWIbxcceVOF34GfID5yHI9Y/QCB/IIDEgEw+OyQm\n" \
"jgSubJrIqg0CAwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMC\n" \
"AYYwHQYDVR0OBBYEFIQYzIU07LwMlJQuCFmcx7IQTgoIMA0GCSqGSIb3DQEBCwUA\n" \
"A4IBAQCY8jdaQZChGsV2USggNiMOruYou6r4lK5IpDB/G/wkjUu0yKGX9rbxenDI\n" \
"U5PMCCjjmCXPI6T53iHTfIUJrU6adTrCC2qJeHZERxhlbI1Bjjt/msv0tadQ1wUs\n" \
"N+gDS63pYaACbvXy8MWy7Vu33PqUXHeeE6V/Uq2V8viTO96LXFvKWlJbYK8U90vv\n" \
"o/ufQJVtMVT8QtPHRh8jrdkPSHCa2XV4cdFyQzR1bldZwgJcJmApzyMZFo6IQ6XU\n" \
"5MsI+yMRQ+hDKXJioaldXgjUkK642M4UwtBV8ob2xJNDd2ZhwLnoQdeXeGADbkpy\n" \
"rqXRfboQnoZsG4q5WTP468SQvvG5\n" \
"-----END CERTIFICATE-----\n";


const char* aws_cert_crt = \
"-----BEGIN CERTIFICATE-----\n" \
"MIIDWjCCAkKgAwIBAgIVAKxjg2OyAZmsJEg+KPAfpxTqHobmMA0GCSqGSIb3DQEB\n" \
"CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t\n" \
"IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0yNDEyMTMxNDA1\n" \
"NTNaFw00OTEyMzEyMzU5NTlaMB4xHDAaBgNVBAMME0FXUyBJb1QgQ2VydGlmaWNh\n" \
"dGUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQC25qIwsv6WByiHWDt6\n" \
"InGYiU2VQ6cNlL+vMMHyBZZY5/wYTNSCI/dDvAAYpTV6+oKkZ/DRmXXLMKRGmKRS\n" \
"dXM9wSEnVQz4GucpUl576f3ievokwl449FtzK/JpaJjFRJRb11nMs5erR4V1KAZZ\n" \
"JzTsTDAbntmL77Rx7Ijk2Ib6A1Xe9BV7i8rTI7uGZEW+wW8UHUBDZECBKsT7QiEA\n" \
"Dk/GIIxhC0Ed+KvYdpxdVJYe6uPJMMjgfG1txYMP7d3GrJkyVuQq5JUQO8+/gkiW\n" \
"lPA/O0yd2ZxXtfdrird7V9TSWNqM6x6897bIq3GWgpZewe46+nhr+XZTyruBZnwV\n" \
"HnYdAgMBAAGjYDBeMB8GA1UdIwQYMBaAFEZ9AzgN2bxvGDFhWuN2PyD1VsdUMB0G\n" \
"A1UdDgQWBBSSGLn46GUBlrhNglLwUGnLs3uG1TAMBgNVHRMBAf8EAjAAMA4GA1Ud\n" \
"DwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEAgR5Yru86Im/qsfufVllo+rfV\n" \
"WiE4ydoQAErfW3FNhdKZD6r38rh4O2kIDgKWlELu4q7DLJLtsUAqGDkKj8X1pCTo\n" \
"dIH44i0goXIKeZ48WfDtdXdK5I3aztF2h2NAZgdtL4JyXOv/1S6d8ulVgLihrLjU\n" \
"qQfG3C3xP9SmkjEVbkRTsWZhSPKFK0dAnqigpQnj3bsWLYSwUQNYXzBOAHPU5dZf\n" \
"ujuVvfFk6v3A79j7R4qy+TeL2ZbPeTCdk9XhlwQ7dQpD/sG6IKZF/J/ONBLBxY8o\n" \
"SfZpZsj1NDg8S0/R5P3FmOLtPy+E2OL7n8aB+yMj6on2F8DnERrXmkXzTXUaQA==\n" \
"-----END CERTIFICATE-----\n";


const char* aws_cert_private = \
"-----BEGIN RSA PRIVATE KEY-----\n" \
"MIIEpAIBAAKCAQEAtuaiMLL+lgcoh1g7eiJxmIlNlUOnDZS/rzDB8gWWWOf8GEzU\n" \
"giP3Q7wAGKU1evqCpGfw0Zl1yzCkRpikUnVzPcEhJ1UM+BrnKVJee+n94nr6JMJe\n" \
"OPRbcyvyaWiYxUSUW9dZzLOXq0eFdSgGWSc07EwwG57Zi++0ceyI5NiG+gNV3vQV\n" \
"e4vK0yO7hmRFvsFvFB1AQ2RAgSrE+0IhAA5PxiCMYQtBHfir2HacXVSWHurjyTDI\n" \
"4HxtbcWDD+3dxqyZMlbkKuSVEDvPv4JIlpTwPztMndmcV7X3a4q3e1fU0ljajOse\n" \
"vPe2yKtxloKWXsHuOvp4a/l2U8q7gWZ8FR52HQIDAQABAoIBAFuBP5vFsYE1y50L\n" \
"E5ajLNn3t4z579XnmY74gc+n4/RO+9zcc2U4wThuEk5COWNxeXLvXZg/gqNJjqaT\n" \
"L4Lhp+o5eXDIKFjofMY7o3GzO4XXqNZDOAiemDIixoDeB7CKAv9/2jmDkFnsymQ2\n" \
"xhZMeznNVDQ9YPGV1103zbVQbxcdQveeVoG7Ba7OgpfhPos9OYUjNUJUs/mUuv20\n" \
"D/qLAqdfxIJ9Lj0XxOsteguYcfWSo4XIQTydgPAzfHXybetwlbtKKKbtNexFpYuH\n" \
"BLsS52EUa1E80/Ti+AqRnYTBYkFcVSHSJRp8h91iMXXfZHZwjRN+SymP9CObR9iA\n" \
"gvrNswECgYEA6Q/sEzggD/P1taFeZkUkH09lUZuJVBOF0VZvlSyzNMnc+QdBp1Uk\n" \
"hSbAe7dLDUsabBy2CZO9CzGmrp+12SN1KJqmIlEanxWhyRShcXSdQgyY72d3rT3o\n" \
"DBwhfpuhgVgJ3p3BNlUeH1KMhtTPIUzp5tQDuy+04QrKFqN0si3so9ECgYEAyObh\n" \
"rADDFmU4sW1w4ehEfCEQDBgtcuwPyc597a7a1KJ8wqXiVHcc50249cKYF3F+okT7\n" \
"XSpXR2Tnm742DTYjeV6R5snYufkDIpwqAy7mY/5C81OdE3ixPe9s6B+Wimw8Aens\n" \
"LDP+bQDtHNm9/sCqr3Sd3c93WfMnN+9mWLo/fI0CgYBiIhUqJojBjtyX5OGFuHk0\n" \
"Qc8MpKwXXb0L3xROwKqYgKLtrJOFbMFa221S6mPMriHrAc/Yin+gFgD0KEV+r4Jm\n" \
"XW+0pWfLMmWT8H7l8c9Bf2Jp86wdoyJw7utfjxJbDwHg3ZX8VazATZbkMvkgMW2P\n" \
"hxgnGjhURaHAFIVPfSzV8QKBgQCnSsMPBM9vHbjY3mZKZ6xnpOyE9bka4oG/LYjl\n" \
"XF5zBB9ZwuK2LT3PSoRDedhGZUbq/wBFs1VcaSUIJptB4xwlG9/oy5oCOt4met3t\n" \
"KqfFClxb3PuG1FDbXz1UCcHE4J4TheQZZu5tfID2LkctFOjNFBHFO9aJ+5Vj2aFj\n" \
"LyxgnQKBgQDnIb9qlKBAyNcQdCLrIYC74K5Eij4487c9ZpQiXCV1GuAPGNK1277S\n" \
"BtKJhQ9Ns6Rp2vtM2/IITmW1J7INNOiAz55+z5XHJuVeexcZXJmFReKWrEaL+Slg\n" \
"0l1sqMISA2Cv9E0LxuzmHFdAj2QYqTqahaLQC5B7eqToUloUu0jLIQ==\n" \
"-----END RSA PRIVATE KEY-----\n";

#endif


