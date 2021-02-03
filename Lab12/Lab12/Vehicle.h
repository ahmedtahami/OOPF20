#pragma once
#include"CarbonFootprint.h"
class Vehicle : public CarbonFootprint
{
private:
	double MilesDrivenPerWeek;
	const double WeeksInAYear = 52.1429;
	double FuelEfficiency;
	double GreenHouseGasEmission;
	double Co2PerGallon;
public:
	Vehicle();
	Vehicle(double milesDrivenPerWeek, double fuelEfficiency, double greenHouseGasEmission, double Co2PerGallon);
	double getCarbonFootprint();
	void setMilesDrivenPerWeek(double milesDrivenPerWeek);
	void setFuelEfficiency(double fuelEfficency);
	void setGreenHouseGasEmission(double greenHouseGasEmission);
	void setCo2PerGallon(double co2PerGallon);
	double getMilesDrivenPerWeek();
	double getFuelEfficiency();
	double getGreenHouseGasEmission();
	double getCo2PerGallon();
};

