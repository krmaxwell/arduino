// pin definitions for 74HC595 which uses protocol SPI

int data = 2;
int clock = 3;
int latch = 4;

void setup() {
	pinmode(data, OUTPUT);
	pinmode(clock, OUTPUT);
	pinmode(latch, OUTPUT);
}

void loop() {
	int delayTime = 100;

	for (int i = 0; i < 256; i++) {
		updateLEDs(i);
		delay(delayTime);
	}
}

// sends the LED states set in value to the 74HC595 sequence
void updateLEDs(int value) {
	digitalWrite(latch, LOW);
	shiftOut(data, clock, MSBFIRST, value);		// shift out 8 bits to shift reg
	digitalWrite(latch, HIGH);
	
