#define SLAVE1 21
#define SLAVE2 22
#define SLAVE3 23
#define SLAVE4 24

#include <Wire.h>
#include <Keypad.h>

int Current_floor;
char Temp;

void setup() {
  Wire.begin();        // join i2c bus (address optional for master)
  Serial.begin(9600);  // start serial for output
}

void loop() {

                              //fill a 2d array with the magic sequence
  int MagicSequence[2][3];    //don't forget arrays are zerobased

  Wire.requestFrom(SLAVE1, 2);    
MagicSequence[0][0] = 1 ;//Wire.read();
MagicSequence[1][0] = Wire.read();
  delay(1);

    Wire.requestFrom(SLAVE2, 2);    
MagicSequence[0][1] = 2 ;//Wire.read();
MagicSequence[1][1] = Wire.read();
  delay(1);

    Wire.requestFrom(SLAVE3, 2);
MagicSequence[0][2] = 3 ;//
Wire.read();
Temp = Wire.read();
if(Temp == 1){
  
}
  delay(1);

for(int y = 0, y <= 2, y++){
  for(int x = 0, x <= 1, x++){
Serial.println(MagicSequence[x][y]);
   }}

if(){
void Called_to_floor();
}

7SEG_write(Live_floor());



}


char Keypad(){{                             //code for the keypad, planning to divide the code into functions
const byte ROWS = 4; 
const byte COLS = 4; 

char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[ROWS] = {13, 12, 11, 10}; 
byte colPins[COLS] = {7, 6, 5, 4}; 

Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

void setup(){
  Serial.begin(9600);
}

void loop(){
  char customKey = customKeypad.getKey();

  if (customKey){
    Serial.println(customKey);
    return(customKey)
  }


int Live_floor(){}
void 7SEG_write(int Number){}

void Called_to_floor(int FloorX){
  switch(FloorX){
    default:
    Serial.println("Error Called to floor: Invalid input")
    break;

    
    case "1":
    if(Live_floor() == 1){break;}
    else{

    }
    break;
      
  
    case "2":
    break;
    
    
    case "3":
    break;
  }
}

Down_till(int Floor){
  //Stepmoter down on this line
  if
}