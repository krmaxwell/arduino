int ledPins[] = {2,3,4,5,6,7,8,9};	// array to hold the pin for each LED
int delayTime = 100;			// time between LED changes

void setup() {
	for (int i = 0; i < 8; i++) {
		pinMode(ledPins[i], OUTPUT);
	}
}

void loop() {
	oneAfterAnotherLoop();
}

void oneAfterAnotherLoop() {
	for (int i = 0; i < 8; i++) {
		digitalWrite(ledPins[i], HIGH);
		delay(delayTime);
	}

	for (int i = 0; i < 8; i++) {
		digitalWrite(ledPins[i], LOW);
		delay(delayTime);
	}
}

void oneAtATime() {
	for (int i = 0; i < 8; i++) {
		digitalWrite(ledPins[i], HIGH);
		delay(delayTime);
		digitalWrite(ledPins[i], LOW);
		delay(delayTime);
	}
}

void inAndOut() {
	for (int i = 0; i < 8; i++) {
		digitalWrite(ledPins[i], HIGH);
	}

	delay(delayTime*8);

	for (int i = 0; i < 8; i++) {
		digitalWrite(ledPins[i], LOW);
	}

	delay(delayTime*8);
}
