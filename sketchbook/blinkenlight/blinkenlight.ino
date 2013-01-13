const int LED = 13; // LED connected to digital pin 13

void setup()
{
  pinMode(LED, OUTPUT); // sets the digital pin as output
}

void loop()
{
  digitalWrite(LED, HIGH);  // turn the LED on
  delay(1000);              // wait one second
  digitalWrite(LED, LOW);   // turn the LED off
  delay(1000);              // wait one second
}
