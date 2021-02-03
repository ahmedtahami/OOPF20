#pragma once
#include "Vehicle.h"
#include<iomanip>
#include<fstream>
class BilalMotors
{
private:
	Vehicle** Vehicles;
	int Count;
	static int Cars;
	static int Bikes;
	static int Trucks;
	void getCountOfTypes() {
		Cars = Bikes = Trucks = 0;
		char* car = new char[4]{ "Car" };
		char* bike = new char[5]{ "Bike" };
		char* truck = new char[6]{ "Truck" };
		for (int i = 0; i < Count; i++)
		{
			if (Vehicles[i]->getTypeOfVehicle() == car)
			{
				Cars++;
			}
			else if (Vehicles[i]->getTypeOfVehicle() == bike)
			{
				Bikes++;
			}
			else if (Vehicles[i]->getTypeOfVehicle() == truck)
			{
				Trucks++;
			}
		}
	}
public:
	BilalMotors() {
		Vehicles = new Vehicle*[Count];
		Count = 0;
	}
	BilalMotors(const BilalMotors& obj) {
		Count = obj.Count;
		Vehicles = new Vehicle*[Count];
		for (int i = 0; i < Count; i++)
		{
			Vehicles[i] = *(obj.Vehicles + i);
		}
	}
	void addVehicle(Vehicle* obj) {
		Vehicle** temp = new Vehicle * [Count];
		for (int i = 0; i < Count; i++)
			temp[i] = Vehicles[i];
		delete[] Vehicles;
		for (int i = 0; i < Count; i++)
			Vehicles[i] = nullptr;
		Count++;
		Vehicles = new Vehicle * [Count];
		for (int i = 0; i < Count; i++)
		{
			Vehicles[i] = *(temp + i);
		}
		Vehicles[Count - 1] = obj;
		cout << "Vehicle Added Successfully\n";
		getCountOfTypes();
	}
	Vehicle& operator[](int index) {
		if (index > Count)
		{
			cout << "Index out of bounds" << endl;
			exit(-1);
		}
		return Vehicles[index][0];
	}
	bool SaveData(string filename = "data.txt") {
		fstream file;
		file.open(filename);
		if (!file.is_open())
		{
			cout << "Could Not Open File!";
			return false;
		}
		file << "Total Number Of Cars : " << Cars << endl;
		file << "Total Number Of Bikes : " << Bikes << endl;
		file << "Total Number Of Trucks : " << Trucks << endl;
		for (int i = 0; i < Count; i++)
		{
			file << Vehicles[i];
		}
		file.close();
		return true;
	}
	void ShowVehicles(){
		cout << "Total Number Of Cars : " << Cars << endl;
		cout << "Total Number Of Bikes : " << Bikes << endl;
		cout << "Total Number Of Trucks : " << Trucks << endl;
		for (int i = 0; i < Count; i++)
		{
			Vehicles[i]->Display();
		}
	}
	void DisplayByType(char* type) {
		for (int i = 0; i < Count; i++)
		{
			if (Vehicles[i]->getTypeOfVehicle() == type)
			{
				Vehicles[i]->Display();
			}
		}
	}
	
	~BilalMotors() {
		bool res = SaveData();
		if (res)
			cout << "Data Saved Successfully!\n";
		else
			cout << "Could Not Save Data!\n";
		delete[] Vehicles;
		for (int i = 0; i < Count; i++)
			Vehicles[i] = nullptr;
		Count = 0;
	}
};

