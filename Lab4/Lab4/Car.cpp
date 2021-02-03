#include "Car.h"
#include<iostream>
using namespace std;
Car::Car() {
	Name = nullptr;
	Manufacturer = nullptr;
	Color = nullptr;
	Year = 0;
}
Car::Car(char* name, char* manufacturer, char* color, int year) {
	setName(name);
	setManufacturer(manufacturer);
	setColor(color);
	setYear(year);
}
void Car::setName(char* name) {
	Name = name;
}
char* Car::getName() {
	return Name;
}
void Car::setManufacturer(char* manufacturer) {
	Manufacturer = manufacturer;
}
char* Car::getManufacturer() {
	return Manufacturer;
}
void Car::setColor(char* color) {
	Color = color;
}
char* Car::getColor() {
	return Color;
}
void Car::setYear(int year) {
	Year = year;
}
int Car::getYear() {
	return Year;
}
void Car::Display() {
	cout << "Car Name: " << getName() << endl;
	cout << "Car Manufacturer: " << getManufacturer() << endl;
	cout << "Car Color: " << getColor() << endl;
	cout << "Car Year: " << getYear() << endl;
}