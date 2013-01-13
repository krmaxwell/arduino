int sensorPin = 0;		// input pin for pot
int ledPin = 13;		// output pin for LED
int sensorValue = 0;		// store input

void setup() {
	pinMode(ledPin, OUTPUT);
}

void loop() {
	sensorValue = analogRead(sensorPin);
	digitalWrite(ledPin, HIGH);
	delay(sensorValue);
	digitalWrite(ledPin, LOW);
	delay(sensorValue);
}
