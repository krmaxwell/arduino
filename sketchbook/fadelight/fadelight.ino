const int LED = 9; // LED connected to digital pin 13
int i = 0;

void setup()
{
  pinMode(LED, OUTPUT); // sets the digital pin as output
}

void loop()
{
  for (i = 0; i < 255; i++) {
    analogWrite(LED, i);    // set the LED brightness value
    delay(10);              // wait briefly
  }

  for (i = 255; i > 0; i--) {
    analogWrite(LED, i);    // set the LED brightness value
    delay(10);              // wait briefly
  }


}
