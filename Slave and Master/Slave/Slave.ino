# include <Arduino.h>
# include <Wire.h>

# define I2C_ADDRESS 21 // define this slave as number 21

# define LED 13

# define KNP 7

void setup() {
Wire.begin(1); // from Arduino 1
Wire.onReceive(receiveEvent);
pinMode(LED, OUTPUT);
pinMode(KNP, INPUT_PULLUP); // Set KNP pin as input with internal pull-up resistor

Serial.begin(9600);
}

void loop() {
// put your main code here, to run repeatedly:
delay(100);
}

void receiveEvent() {
int LedOrder = Wire.read(); // Read the value sent over I2C

if (digitalRead(KNP) == LOW){

}

if (LedOrder == HIGH) {
digitalWrite(LED, HIGH);
Serial.println("lamp gaat aan");
} else {
digitalWrite(LED, LOW);
}

}