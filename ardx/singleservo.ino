#include <Servo.h>

Servo myservo;			// create servo object
int pos = 0;			// servo position

void setup() {
	myservo.attach(9);	// attach servo on pin 9 to servo object
}

void loop() {
	for (pos = 0; pos < 180; pos++) {
		myservo.write(pos);
		delay(15);
	}

	for (pos = 180; pos >= 1; pos--) {
		myservo.write(pos);
		delay(15);
	}
}
