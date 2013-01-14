int lightPin = 0;		// analog pin for uncalibrated photoresistor
int ledPin = 9;			// outpin pin for LED (using PWM)]

void setup() {
	pinMode(ledPin, OUTPUT);
}

void loop() {
	int lightLevel = analogRead(lightPin);

	// recalibrate from 0-900 to 0-255
	lightLevel = map(lightLevel, 0, 900, 0, 255);
	// output validation
	lightLevel = constrain(lightLevel, 0, 255);
	analogWrite(ledPin, lightLevel);
}
