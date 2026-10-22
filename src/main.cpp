#include <Arduino.h>
 
void setup() {
  pinMode(13, OUTPUT);      // pin 13 sebagai output (LED bawaan)
}
 
void loop() {
  digitalWrite(13, HIGH);   // LED menyala
  delay(1000);              // tunggu 1 detik
  digitalWrite(13, LOW);    // LED mati
  delay(1000);              // tunggu 1 detik
}
