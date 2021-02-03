#pragma once
#include "Vehicle.h"
#include <iomanip>
#include<fstream>
class Car : public Vehicle
{
private:
	int NoOfDoors;
	int NoOfSeats;
	char* Transmission;
	static int NoOfCars;
	char* deepCopy(char* arr) {
		size_t size = strlen(arr) + 1;
		char* temp = new char[size];
		strcpy_s(temp, size, arr);
		return temp;
	}
public:
	Car() : Vehicle() {
		Transmission = nullptr;
		NoOfDoors = 0;
		NoOfSeats = 0;
		NoOfCars++;
		CheckType();
	}
	Car(char* companyName, char* color, int numberOfWheels, int powerCC, int noOfDoors, int noOfSeats, char* transmission) : Vehicle(companyName, color, numberOfWheels, powerCC) {
		Transmission = deepCopy(transmission);
		NoOfDoors = noOfDoors;
		NoOfSeats = noOfSeats;
		NoOfCars++;
		CheckType();
	}
	Car(const Car& obj) : Vehicle(obj) {
		Transmission = deepCopy(obj.Transmission);
		NoOfDoors = obj.NoOfDoors;
		NoOfSeats = obj.NoOfSeats;
		CheckType();
		NoOfCars++;
	}
	void setNoOfDoors(int noOfDoors) {
		NoOfDoors = noOfDoors;
	}
	int getNoOfDoors() const {
		return NoOfDoors;
	}
	void setNoOfSeats(int noOfSeats) {
		NoOfSeats = noOfSeats;
	}
	int getNoOfSeats() const {
		return NoOfSeats;
	}
	void setTransmission(char* transmission) {
		Transmission = deepCopy(transmission);
	}
	char* getTransmission() {
		char* temp = deepCopy(Transmission);
		return temp;
	}
	void Display() {
		cout << "Comapny Name" << setw(20) << "Vehicle Type" << setw(20) << "Color" << setw(20) << "Power" << setw(20) << "No. Of Wheels" << setw(20) << "Transmission" << setw(20) << "No. Of Seats" << setw(20) << "No. Of Doors" << endl;
		cout << getCompanyName() << setw(20) << getTypeOfVehicle() << setw(20) << getColor() << setw(20) << getPowerCC() << setw(20) << getNumberOfWheels() << setw(20) << Transmission << setw(20) << NoOfSeats << setw(20) << NoOfDoors << endl;
	}
	void CheckType() {
		int wheels = getNumberOfWheels();
		if (wheels == 2)
		{
			char* temp = new char[5]{ "Bike" };
			setTypeOfVehicle(temp);
		}
		else if (wheels == 4)
		{
			char* temp = new char[4]{ "Car" };
			setTypeOfVehicle(temp);
		}
		else if (wheels > 4 && getNumberOfWheels() % 2 == 0)
		{
			char* temp = new char[6]{ "Truck" };
			setTypeOfVehicle(temp);
		}
		else
		{
			char* temp = new char[10]{ "Undefined" };
			setTypeOfVehicle(temp);
		}
	}
	friend fstream& operator << (fstream& write, Car& obj);
	~Car() {
		delete[] Transmission;
		Transmission = nullptr;
		NoOfDoors = 0;
		NoOfSeats = 0;
		NoOfCars--;
	}
};

