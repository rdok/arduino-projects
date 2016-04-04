// Spaceship.ino
int thirdPin = 3;
int fourthPin = 4;
int fifthPin = 5;
int secondPin = 2;

void setup() {
	setUpPins();
	showStartMessage();
}

void loop() {

	if ( ! buttonIsPressed())
	{
		flashOn();
	} else {
		flashOff();
	}
}

void showStartMessage(){
	for(int i = 0; i < 3; i++){
		flashOn();
		waitForAQuearterSecond();
		flashOff();
	}
}

void flashOff(){
		turnGreenLEDOff();
		turnFourthRedLEDOff();
		turnFifthRedLEDOn();

		waitForAQuearterSecond();

		turnFourthRedLEDOn();
		turnFifthRedLEDOff();

		waitForAQuearterSecond();

		turnFourthRedLEDOff();
		turnFifthRedLEDOn();

		waitForAQuearterSecond();
		
		turnFourthRedLEDOn();
		turnFifthRedLEDOff();

		waitForAQuearterSecond();
}

void flashOn(){
	turnGreenLEDOn();
	turnFourthRedLEDOff();
	turnFifthRedLEDOff();
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