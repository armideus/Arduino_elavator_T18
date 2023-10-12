#define x 1 //
int Adress = 20 + x;

#include <Wire.h>

void setup() {
  Wire.begin(Adress);                // join i2c bus with address #8
  Wire.onRequest(requestEvent); // register event
}

void loop() {
  delay(500);
}

// function that executes whenever data is requested by master
// this function is registered as an event, see setup()
void requestEvent() {
  Wire.write(X++); // respond with message of 6 bytes
  // as expected by master
}