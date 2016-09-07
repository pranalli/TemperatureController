/*
	TemperatureSensor is a class designed to represent a TMP36 sensor 
	being read from an Arduino.  It provides an abstraction for getting 
	temperature readings. 

	@author: Pasquale Ranalli
*/
class TemperatureSensor
{
	int pin;
public:
	TemperatureSensor(int x);
	float getTempFahrenheit();
	float getTempCelsius();

private:
	float getVoltage();
};

