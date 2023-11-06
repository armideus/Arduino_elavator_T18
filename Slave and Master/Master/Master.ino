#define SLAVE1 21
#define SLAVE2 22
#define SLAVE3 23
#define SLAVE4 24

#include <Wire.h>



void setup() {
  Wire.begin();        // join i2c bus (address optional for master)
  Serial.begin(9600);  // start serial for output
}

void loop() {
  Wire.requestFrom(SLAVE1, 15);    // request 14 bytes 
  while (Wire.available()) { // peripheral may send less than requested
    char c = Wire.read(); // receive a byte as character
    Serial.print(c);         // print the character
  }
   Serial.println();
delay(1000);
  Wire.requestFrom(SLAVE2, 15);    // request 14 bytes 
  while (Wire.available()) { // peripheral may send less than requested
    char c = Wire.read(); // receive a byte as character
    Serial.print(c); 
  }
  Serial.println();
  delay(500);
}

bool FFloorscan(int x);