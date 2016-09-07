#include "TemperatureSensor.h"
#include "Arduino.h"

TemperatureSensor::TemperatureSensor(int x)
{
	pin = x;
	pinMode(pin, INPUT);
}

float TemperatureSensor::getTempFahrenheit() 
{
	float tempC = getTempCelsius();
	return (tempC * 9 / 5) + 32;
}

float TemperatureSensor::getTempCelsius() 
{
	float voltage = getVoltage();
	return (voltage - 0.5) * 100;
}

float TemperatureSensor::getVoltage() 
{
	int reading = analogRead(pin);
	return reading * 0.004882814;
}
