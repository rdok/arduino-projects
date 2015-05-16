// Spaceship.ino
int thirdPin = 3;
int fourthPin = 4;
int fifthPin = 5;
int secondPin = 2;

void setup() {
	setUpPins();

}

void loop() {

	if ( ! buttonIsPressed())
	{
		turnGreenLEDOn();
		turnFourthRedLEDOff();
		turnFifthRedLEDOff();
	} else {
		turnGreenLEDOff();
		turnFourthRedLEDOff();
		turnFifthRedLEDOn();

		waitForAQuearterSecond();

		turnFourthRedLEDOn();
		turnFifthRedLEDOff();

		waitForAQuearterSecond();
	}
}

void setUpPins() {
	pinMode(thirdPin, OUTPUT);
	pinMode(fourthPin, OUTPUT);
	pinMode(fifthPin, OUTPUT);
	pinMode(secondPin, INPUT);
}

boolean buttonIsPressed(){
	
	return digitalRead(secondPin);
}

void turnGreenLEDOn(){
	digitalWrite(thirdPin, HIGH);
}

void turnGreenLEDOff() {
	digitalWrite(thirdPin, LOW);
}

void turnFourthRedLEDOff() {
	digitalWrite(fourthPin, LOW);
}

void turnFifthRedLEDOff() {
	digitalWrite(fifthPin, LOW);
}

void turnFourthRedLEDOn() {
	digitalWrite(fourthPin, HIGH);
}

void turnFifthRedLEDOn() {
	digitalWrite(fifthPin, HIGH);
}

void waitForAQuearterSecond(){
	delay(250);
}