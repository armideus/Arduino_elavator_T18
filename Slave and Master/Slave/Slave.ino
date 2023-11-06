#include <Wire.h>




void setup() {
  Slave(1)
  Wire.begin(Adress);            // join i2c bus with address #8
  Wire.onRequest(requestEvent);  // register event

}

void loop() {
  delay(500);
}

void requestEvent() {
  Wire.write(Button_low);
  Wire.write(IR);    // respond with message of 14 bytes
                                    // as expected by master
}

void Slave(int x) {
int Adress = 20 + X;
}