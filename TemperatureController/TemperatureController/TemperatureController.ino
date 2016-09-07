#include "TemperatureSensor.h"

/*
 Name:		TemperatureController.ino
 Purpose:	Control temperature based on temperature sensor and heating element attached to relay.
 Created:	9/6/2016 5:11:26 PM
 Author:	Pasquale Ranalli
*/

TemperatureSensor tempSensor(5);
//const int RELAY1_PIN = 5;
//const int RELAY2_PIN = 6;

void setup() {
	Serial.begin(9600);
	//pinMode(RELAY1_PIN, OUTPUT);
	//pinMode(RELAY2_PIN, OUTPUT);
}

// the loop function runs over and over again until power down or reset
void loop() {
	delay(2000);
	Serial.println(tempSensor.getTempFahrenheit());
}
