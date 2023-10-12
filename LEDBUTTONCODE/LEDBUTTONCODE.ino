
const int BUTTON_PIN = 7;  // the number of the pushbutton pin
const int LED_PIN = 6;     // the number of the LED pin
int buttonState = 0;
bool flag = false;
bool gate = true;


// variables will change:


void setup() {
  // initialize the LED pin as an output:
  pinMode(LED_PIN, OUTPUT);
  // initialize the pushbutton pin as an pull-up input:
  // the pull-up input pin will be HIGH when the switch is open and LOW when the switch is closed.
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  //Read button state (pressed or not pressed?)
  buttonState = digitalRead(BUTTON_PIN);
  if (buttonState == LOW && gate == true) {
    flag = !flag;
    gate = false;
  }
  if (buttonState == HIGH) { gate = true; }

  digitalWrite(LED_PIN, flag);
  Serial.println(String(buttonState));
}