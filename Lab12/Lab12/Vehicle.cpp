#include "Vehicle.h"
Vehicle::Vehicle() {
	MilesDrivenPerWeek = 0;
	FuelEfficiency = 0;
	GreenHouseGasEmission = 0;
	Co2PerGallon = 0;
}
Vehicle::Vehicle(double milesDrivenPerWeek, double fuelEfficiency, double greenHouseGasEmission, double Co2perGallon) {
	MilesDrivenPerWeek = milesDrivenPerWeek;
	FuelEfficiency = fuelEfficiency;
	GreenHouseGasEmission = greenHouseGasEmission;
	Co2PerGallon = Co2perGallon;
}
void Vehicle::setMilesDrivenPerWeek(double milesDrivenPerWeek) {
	MilesDrivenPerWeek = milesDrivenPerWeek;
}
void Vehicle::setFuelEfficiency(double fuelEfficency) {
	FuelEfficiency = fuelEfficency;
}
void Vehicle::setGreenHouseGasEmission(double greenHouseGasEmission) {
	GreenHouseGasEmission = greenHouseGasEmission;
}
void Vehicle::setCo2PerGallon(double co2PerGallon) {
	Co2PerGallon = co2PerGallon;
}
double Vehicle::getMilesDrivenPerWeek() {
	return MilesDrivenPerWeek;
}
double Vehicle::getFuelEfficiency() {
	return FuelEfficiency;
}
double Vehicle::getGreenHouseGasEmission() {
	return GreenHouseGasEmission;
}
double Vehicle::getCo2PerGallon() {
	return Co2PerGallon;
}
double Vehicle::getCarbonFootprint() {
	return ((MilesDrivenPerWeek * WeeksInAYear) / FuelEfficiency) * GreenHouseGasEmission * Co2PerGallon;
}