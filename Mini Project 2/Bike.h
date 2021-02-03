#pragma once
#include "Vehicle.h"
#include<string>
#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
class Bike : public Vehicle
{
private:
	double Height;
	bool SelfStart;
	bool DiscBrake;
	static int NumberOfBikes;
public:
	Bike() : Vehicle(){
		Height = 0;
		SelfStart = false;
		DiscBrake = false;
		NumberOfBikes++;
		CheckType();
	}
	Bike(char* companyName, char* color, int numberOfWheels, int powerCC, double height, bool selfStart, bool discBrake) : Vehicle(companyName, color, numberOfWheels, powerCC) {
		Height = height;
		SelfStart = selfStart;
		DiscBrake = discBrake;
		NumberOfBikes++;
		CheckType();
	}
	Bike(const Bike& obj) : Vehicle(obj) {
		Height = obj.DiscBrake;
		SelfStart = obj.SelfStart;
		DiscBrake = obj.DiscBrake;
		NumberOfBikes++;
		CheckType();
	}
	void setHeight(double height) {
		Height = height;
	}
	double getHeight() const{
		return Height;
	}
	void setSelfStart(bool selfStart) {
		SelfStart = selfStart;
	}
	bool getSelfStart() const {
		return SelfStart;
	}
	void setDiscBrake(bool discBrake) {
		DiscBrake = discBrake;
	}
	bool getDiscBrake() const {
		return DiscBrake;
	}
	void Display() {
		string temp = (SelfStart) ? "Included" : "Not Included";
		string temp1 = (DiscBrake == true) ? "Included" : "Not Included";
		cout << "Comapny Name" << setw(20) << "Vehicle Type" << setw(20) << "Color" << setw(20) << "Power" << setw(20) << "No. Of Wheels" << setw(20) << "Height" << setw(20) << "Disc Brake" << setw(20) << "Self Start" << endl;
		cout << getCompanyName() << setw(20) << getTypeOfVehicle() << setw(20) << getColor() << setw(20) << getPowerCC() << setw(20) << getNumberOfWheels() << setw(20) << Height << setw(20) << temp1 << setw(20) << temp << endl;
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
	friend fstream& operator << (fstream& write, Bike& obj);
	~Bike() {
		Height = 0;
		SelfStart = false;
		DiscBrake = false;
		NumberOfBikes--;
	}
};

