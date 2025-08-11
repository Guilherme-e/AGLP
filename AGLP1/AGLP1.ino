#include <ESP8266WiFi.h>

const char* ssid     = "nome da rede";
const char* password = "senha da rede";

String newHostname = "nome do esp";

void setup() {

  Serial.begin(115200);

  Serial.print("Conectando a rede ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
 
  Serial.println("");
  Serial.println("Conectado ao WiFi.");
  Serial.println("Endereco IP: ");
  Serial.println(WiFi.localIP());
  
  WiFi.hostname(newHostname.c_str());
  Serial.printf("Hostname deste ESP8266: %s\n", WiFi.hostname().c_str());
}

void loop() {
  
}




\\ Isso é um teste 
\\ parece legal
