#pragma once
#include<string>
#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
class Vehicle
{
private:
	char* CompanyName;
	char* Color;
	int NumberOfWheels;
	int PowerCC;
	char* TypeOfVehicle;
	char* deepCopy(char* arr) {
		size_t size = strlen(arr) + 1;
		char* temp = new char[size];
		strcpy_s(temp, size, arr);
		return temp;
	}
public:
	Vehicle() {
		CompanyName = nullptr;
		Color = nullptr;
		TypeOfVehicle = nullptr;
		NumberOfWheels = 0;
		PowerCC = 0;
	}
	Vehicle(char* companyName, char* color, int numberOfWheels, int powerCC) {
		CompanyName = deepCopy(companyName);
		Color = deepCopy(color);
		NumberOfWheels = numberOfWheels;
		PowerCC = powerCC;
		TypeOfVehicle = nullptr;
	}
	Vehicle(const Vehicle& obj) {
		CompanyName = deepCopy(obj.CompanyName);
		Color = deepCopy(obj.Color);
		TypeOfVehicle = deepCopy(obj.TypeOfVehicle);
		NumberOfWheels = obj.NumberOfWheels;
		PowerCC = obj.PowerCC;
	}
	void setCompanyName(char* companyName) {
		CompanyName = deepCopy(companyName);
	}
	char* getCompanyName() {
		char* temp = deepCopy(CompanyName);
		return temp;
	}
	void setColor(char* color) {
		Color = deepCopy(color);
	}
	char* getColor() {
		char* temp = deepCopy(Color);
		return temp;
	}
	void setTypeOfVehicle(char* typeOfVehicle) {
		TypeOfVehicle = deepCopy(typeOfVehicle);
	}
	char* getTypeOfVehicle() {
		char* temp = deepCopy(TypeOfVehicle);
		return temp;
	}
	void setPowerCC(int powerCC){
		PowerCC = powerCC;
	}
	int getPowerCC() const{
		return PowerCC;
	}
	void setNumberOfWheels(int numberOfWheels){
		NumberOfWheels = numberOfWheels;
		CheckType();
	}
	int getNumberOfWheels() const{
		return NumberOfWheels;
	}
	virtual void CheckType() = 0;
	virtual void Display() = 0;
	friend fstream& operator << (fstream& write, Vehicle& obj);
	virtual void operator=(Vehicle& obj) {
		CompanyName = deepCopy(obj.CompanyName);
		Color = deepCopy(obj.Color);
		TypeOfVehicle = deepCopy(obj.TypeOfVehicle);
		NumberOfWheels = obj.NumberOfWheels;
		PowerCC = obj.PowerCC;
	}
	~Vehicle() {
		delete[] CompanyName;
		CompanyName = nullptr;
		delete[] Color;
		Color = nullptr;
		delete[] TypeOfVehicle;
		TypeOfVehicle = nullptr;
		NumberOfWheels = 0;
		PowerCC = 0;
	}
};

