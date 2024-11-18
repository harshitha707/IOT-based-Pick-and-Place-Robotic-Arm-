#define BLYNK_TEMPLATE_ID "TMPL33as8_0fl"
#define BLYNK_TEMPLATE_NAME "iot pick and place robot"
#define BLYNK_AUTH_TOKEN "2AcAmtHdC2n32FrX_KZEIhej23tbJIJF"
#define BLYNK_PRINT Serial 

#include <WiFi.h>
#include <WiFiClint.h>
#include <BlynkSimpleEsp32.h>

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "robot";
char pass[] = "12345678";

void setup() {
  pinMode(26,OUTPUT);
  pinMode(25,OUTPUT);
  pinMode(14,OUTPUT);
  pinMode(27,OUTPUT);
  pinMode(19,OUTPUT);
  pinMode(21,OUTPUT);
  pinMode(22,OUTPUT);
  pinMode(23,OUTPUT);
  Stop();
  Blynk.begin(auth, ssid, pass);
}

void open() {
  digitalWrite(19,LOW);
  digitalWrite(21,HIGH);
  delay(100);
  digitalWrite(19, LOW);
  digitalWrite(21, LOW);
}

void close() {
  digitalWrite(19,HIGH);
  digitalWrite(21,LOW);
  delay(100);
  digitalWrite(19, LOW);
  digitalWrite(21, LOW):
}

void up() {
  digitalWrite(22,HIGH);
  digitalWrite(23,LOW);
  delay(100);
  digitalWrite(22, LOW);
  digitalWrite(23, LOw);
}

void dn() {
  digitalWrite(22,HIGH);
  digitalWrite(23,LOW);
  delay(100);
  digitalWrite(22, LOW);
  digitalWrite(23, LOW):
}

void Stop() {
  digitalWrite(14,HIGH);
  digitalWrite(27,LOW); 
  digitalWrite(26, LOW);
  digitalWrite(25, LOW):
}

void Forward() {
  digitalWrite(14,LOW);
  digitalWrite(27, HIGH);
  digitalWrite(26, LOW);
  digitalWrite(25, HIGH);
}

void Backward() {
  digitalWrite(14, HIGH);
  digitalWrite(27, LOW)
  digitalWrite(26, HIGH);
  digitalWrite(25, LOW);
}

void Right() {
  digitalWrite(14, LOW);
  digitalWrite(27, HIGH);
  digitalWrite(26, HIGH);
  digitalWrite(25, LOW);
}

void Left() {
  digitalWrite(14, HIGH);
  digitalWrite(27, LOW);
  digitalWrite(26, LOW);
  digitalWrite(25, HIGH);
}

BLYNK_WRITE(V1) {
  Forward();
}

BLYNK_WRITE(V2) {
  Backward();
}

BLYNK_WRITE(V3) {
  Left();
}

BLYNK_WRITE(V4) {
  Right();
}

BLYNK_WRITE(V5) {
  Stop();
}

BLYNK_WRITE(V6) {
  Open();
}

BLYNK_WRITE(V7) {
  Close();
}

BLYNK_WRITE(V8) {
  Up();
}

BLYNK_WRITE(V9) {
  dn();
}

void loop() {
  Blynk.run();
}


  
