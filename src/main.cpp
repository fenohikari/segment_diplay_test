#include <Arduino.h>


void setup() {
  for (int i = 2; i < 10; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  digitalWrite(2, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(6, HIGH);
  delay(1000);
}

