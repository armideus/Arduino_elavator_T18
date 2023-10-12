#include <Arduino.h>
#include <Wire.h>

#define SLAVE_1 21 //slave 21 is de slaves gebruikt in de code

#define KNP 6 // pin  6 is de knop

int knop = 0; //begint uit
void setup() {
  // put your setup code here, to run once:
  Wire.begin();
  pinMode(KNP, INPUT); //knop is een input
  Serial.begin(9600);

}

void loop() {
  Wire.beginTransmission(21); //naar wie word er gecommuniceerd?
  Wire.write(knop);
  Wire.endTransmission();
  delay(100);



  }