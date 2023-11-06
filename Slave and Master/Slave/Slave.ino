#define XN 1 // Number of slave
int Adress = 20 + XN;
int i = 0;
#include <Wire.h>

void setup() {
  Wire.begin(Adress);            // join i2c bus with address #8
  Wire.onRequest(requestEvent);  // register event
}

void loop() {
  delay(500);
}

void requestEvent() {
  Wire.write("This is slave ");
  Wire.write("9");    // respond with message of 14 bytes
                                    // as expected by master
}