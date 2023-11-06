#include <Wire.h>

#define IRPIN 1
#define BTNPIN 2

#define LEDRED 8
#define LEDGREEN 9
#define BTNLED 10

bool IR;;
bool BTN_low;
bool Chosen_one;

void setup() {
  Slave(1)
  Wire.begin(Adress);            
  Wire.onRequest(requestEvent);  
  Wire.onReceive(receiveEvent);

pinMode(IRPIN, INPUT);
pinMode(BTNPIN, INPUT);

pinMode(LEDRED, OUTPUT);
pinMode(LEDGREEN, OUTPUT);
pinMode(BTNLED, OUTPUT);
}


void loop() {
IR = digitalRead(IRPIN)
BTN_low = digitalRead(BTNPIN)

if(IR == 1){digitalWrite(LEDRED, 1);
if(Chosen_one == true){digitalWrite(LEDRED, 1); }}



}//end loop


void requestEvent() {
  Wire.write(BTN_low);
  Wire.write(IR);    
                                    
}

bool recieveEvent(){
  Chosen_one = Wire.read()
  Return(Chosen_one)
}

void Slave(int x) {
int Adress = 20 + X;
}