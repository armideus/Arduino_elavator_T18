#define SLAVE1 21

#include <Wire.h>

void setup() {
  Wire.begin();        // join i2c bus (address optional for master)
  Serial.begin(9600);  // start serial for output
}

void loop() {
  Wire.requestFrom(SLAVE1, 1);    // request 6 bytes from peripheral device #8
Serial.println(Wire.read());

  delay(500);
}