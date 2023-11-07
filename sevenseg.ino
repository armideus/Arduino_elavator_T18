#include <arduinio.h>
# define EEN 0x22
# define TWEE 0xD6
# define DRIE 0x76
# define VIER 0x3A

// ST_CP pin 12
// ST_CP pin 12
const int latchPin = 10;
// SH_CP pin 11
const int clockPin = 11;
// DS pin 14
const int dataPin = 12;
int state;

byte leds = 0;         // Variable to hold the pattern of which LEDs are currently turned on or off

/*
 * setup() - this function runs once when you turn your Arduino on
 * We initialize the serial connection with the computer
 */
void setup() 
{
  // Set all the pins of 74HC595 as OUTPUT
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);  
  pinMode(clockPin, OUTPUT);
  Serial.begin(9600);
  state =0;
  leds= 0x0000;
  updateShiftRegister();
}

void loop() 
{
  cin >> state;
  switch(state){
    case 1:
      leds = 0x22;
      updateShiftRegister();
      break;
      
    case 2:
      leds = 0xD6;
      updateShiftRegister();
      break;
      
    case 3:
      leds = 0x76;
      updateShiftRegister();
      break;
      
    case 4:
      leds = 0x3A;
      updateShiftRegister();
      break;

    default:
      leds=0x10;
      updateShiftRegister();
      break;
              
        
      
  }

}

/*
 * updateShiftRegister() - This function sets the latchPin to low, then calls the Arduino function 'shiftOut' to shift out contents of variable 'leds' in the shift register before putting the 'latchPin' high again.
 */
void updateShiftRegister()
{
   digitalWrite(latchPin, LOW);
   shiftOut(dataPin, clockPin, MSBFIRST, leds);
   digitalWrite(latchPin, HIGH);
}
