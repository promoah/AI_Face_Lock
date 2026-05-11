#include <WiFi.h>
#include <WebServer.h>

const char* ssid = "OPPO Reno3";
const char* password = "12345678";

const int LOCK_PIN = 23;
const int BUZZER_PIN = 19;

WebServer server(80);

void handleUnlock() {
  digitalWrite(LOCK_PIN, HIGH);
  tone(BUZZER_PIN, 1000, 500);
  server.send(200, "application/json", "{\"status\":\"success\"}");
  delay(3000);
  digitalWrite(LOCK_PIN, LOW);
}

void setup() {
  Serial.begin(115200);
  pinMode(LOCK_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  digitalWrite(LOCK_PIN, LOW);

  WiFi.begin(ssid, password);
  Serial.print("Connecting to WiFi");

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi Connected!");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP()); 

  server.on("/unlock", HTTP_POST, handleUnlock);
  server.on("/status", HTTP_GET, []() {
    server.send(200, "application/json", "{\"status\":\"online\"}");
  });

  server.begin();
}

void loop() {
  server.handleClient();
}