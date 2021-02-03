#pragma once
#include "Vehicle.h"
#include<iomanip>
#include<fstream>
class Truck :
    public Vehicle
{
private:
    double ContainerSize;
    char* Category;
    bool FourWheelDrive;
    static int NumberOfTrucks;
	char* deepCopy(char* arr) {
		size_t size = strlen(arr) + 1;
		char* temp = new char[size];
		strcpy_s(temp, size, arr);
		return temp;
	}
public:
	Truck() : Vehicle() {
		Category = nullptr;
		ContainerSize = 0;
		FourWheelDrive = false;
		NumberOfTrucks++;
		CheckType();
	}
	Truck(char* companyName, char* color, int numberOfWheels, int powerCC, char* category, double containerSize, bool fourWheelDrive) : Vehicle(companyName, color, numberOfWheels, powerCC) {
		Category = deepCopy(category);
		ContainerSize = containerSize;
		FourWheelDrive = fourWheelDrive;
		NumberOfTrucks++;
		CheckType();
	}
	Truck(const Truck& obj) : Vehicle(obj) {
		Category = deepCopy(obj.Category);
		ContainerSize = obj.ContainerSize;
		FourWheelDrive = obj.FourWheelDrive;
		NumberOfTrucks++;
		CheckType();
	}
	void setCategory(char* category) {
		Category = deepCopy(category);
	}
	char* getCategory() {
		char* temp = deepCopy(Category);
		return temp;
	}
	void setFourWheelDrive(bool fourWheelDrive) {
		FourWheelDrive = fourWheelDrive;
	}
	bool getFourWheelDrive() const {
		return FourWheelDrive;
	}
	void setContainerSize(double containerSize) {
		ContainerSize = containerSize;
	}
	double getContainerSize() const {
		return ContainerSize;
	}
	void Display() {
		string temp = (FourWheelDrive) ? "Yes" : "No";
		cout << "Comapny Name" << setw(20) << "Vehicle Type" << setw(20) << "Color" << setw(20) << "Power" << setw(20) << "No. Of Wheels" << setw(20) << "Container Size" << setw(20) << "Category" << setw(20) << "Four Wheel Drive" << endl;
		cout << getCompanyName() << setw(20) << getTypeOfVehicle() << setw(20) << getColor() << setw(20) << getPowerCC() << setw(20) << getNumberOfWheels() << setw(20) << ContainerSize << setw(20) << Category << setw(20) << temp << endl;
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
	friend fstream& operator << (fstream& write, Truck& obj);
	~Truck() {
		delete[] Category;
		Category = nullptr;
		ContainerSize = 0;
		FourWheelDrive = false;
		NumberOfTrucks--;
	}
};

