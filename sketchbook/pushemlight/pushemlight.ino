const int LED = 13; // LED connected to digital pin 13
const int BUTTON = 7; // input pin for the button

int val = 0;          // stores state of input pin
int oldval = 0;       // previous state
int state = 0;        // 0 = LED off, 1 = LED on

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  val = digitalRead(BUTTON);
  
  if ((val == HIGH) && (oldval == LOW)) {
    state = 1 - state;
    delay(500);
  }
  
  oldval = val;
  
  if (state == 1) {
   digitalWrite(LED, HIGH); 
  } else {
    digitalWrite(LED, LOW);
  }
}
