# include <Arduino.h>
# include <Wire.h>

# define I2C_ADDRESS 21 // define this slave as number 21
# define LED 13
# define KNP 7

void setup() {

}

void requestEvent() {
  Wire.write((digitalRead(KNP)));
}