#include"Bike.h"
#include"BilalMotors.h"
#include<iostream>
#include<fstream>
#include<iomanip>
#include "Car.h"
#include "Truck.h"
using namespace std;
int Bike::NumberOfBikes = 0;
int Car::NoOfCars = 0;
int Truck::NumberOfTrucks = 0;
int BilalMotors::Cars = 0;
int BilalMotors::Bikes = 0;
int BilalMotors::Trucks = 0;
fstream& operator << (fstream& write, Vehicle& obj) {
	if (write.peek() == std::fstream::traits_type::eof())
		write << "Comapny Name" << setw(20) << "Vehicle Type" << setw(20) << "Color" << setw(20) << "Power" << setw(20) << "No. Of Wheels" << endl;
	write << obj.getCompanyName() << setw(20) << obj.getTypeOfVehicle() << setw(20) << obj.getColor() << setw(20) << obj.getPowerCC() << setw(20) << obj.getNumberOfWheels() << endl;
	return write;
}
fstream& operator << (fstream& write, Bike& obj) {
	if (write.peek() == std::fstream::traits_type::eof())
		write << "Comapny Name" << setw(20) << "Vehicle Type" << setw(20) << "Color" << setw(20) << "Power" << setw(20) << "No. Of Wheels" << setw(20) << "Height" << setw(20) << "Disc Brake" << setw(20) << "Self Start" << endl;
	write << obj.getCompanyName() << setw(20) << obj.getTypeOfVehicle() << setw(20) << obj.getColor() << setw(20) << obj.getPowerCC() << setw(20) << obj.getNumberOfWheels() << setw(20) << obj.Height << setw(20) << obj.DiscBrake << setw(20) << obj.SelfStart << endl;
	return write;
}
fstream& operator << (fstream& write, Car& obj) {
	if (write.peek() == std::fstream::traits_type::eof())
		write << "Comapny Name" << setw(20) << "Vehicle Type" << setw(20) << "Color" << setw(20) << "Power" << setw(20) << "No. Of Wheels" << setw(20) << "Transmission" << setw(20) << "No. Of Seats" << setw(20) << "No. Of Doors" << endl;
	write << obj.getCompanyName() << setw(20) << obj.getTypeOfVehicle() << setw(20) << obj.getColor() << setw(20) << obj.getPowerCC() << setw(20) << obj.getNumberOfWheels() << setw(20) << obj.Transmission << setw(20) << obj.NoOfSeats << setw(20) << obj.NoOfDoors << endl;
	return write;
}
fstream& operator << (fstream& write, Truck& obj) {
	if (write.peek() == std::fstream::traits_type::eof())
		write << "Comapny Name" << setw(20) << "Vehicle Type" << setw(20) << "Color" << setw(20) << "Power" << setw(20) << "No. Of Wheels" << setw(20) << "Container Size" << setw(20) << "Category" << setw(20) << "Four Wheel Drive" << endl;
	write << obj.getCompanyName() << setw(20) << obj.getTypeOfVehicle() << setw(20) << obj.getColor() << setw(20) << obj.getPowerCC() << setw(20) << obj.getNumberOfWheels() << setw(20) << obj.ContainerSize << setw(20) << obj.Category << setw(20) << obj.FourWheelDrive << endl;
	return write;
}
void Menu(BilalMotors& shop) {
	cout << "*** BILAL MOTORS *** " << endl;
	cout << "-> S Show vehicles list(brief) " << endl;
	cout << "-> E Create a data file(output file) " << endl;
	cout << "-> A Add new vehicle " << endl;
	cout << "	  B for Bike " << endl;
	cout << "	  C for Car " << endl;
	cout << "     T for Truck " << endl;
	cout << "F Find Vehicle by type " << endl;
	cout << "Q Quit Program " << endl;
	char input = '\0';
	cout << "Enter Input: ";
	cin >> input;
	if (input == 'S' || input == 's')
	{
		shop.ShowVehicles();
		Menu(shop);
	}
	else if (input == 'E' || input == 'e')
	{
		bool res = shop.SaveData();
		if (res)
			cout << "Data Saved Successfully!\n";
		else
			cout << "Could Not Save Data!\n";
	}
	else if (input == 'A' || input == 'a')
	{
		string c_name = "\0";
		cout << "Enter Company Name : ";
		cin >> c_name;
		int size = c_name.length() + 1;
		char* companyName = new char[size];
		strcpy_s(companyName,size, c_name.c_str());
		string tempcolor = "\0";
		cout << "Enter Color : ";
		cin >> tempcolor;
		size = tempcolor.length() + 1;
		char* color = new char[size];
		strcpy_s(color, size, tempcolor.c_str());
		int wheels = 0;
		cout << "Enter Number of Wheels : ";
		cin >> wheels;
		int power = 0;
		cout << "Enter Power(CC) : ";
		cin >> power;
		cout << "-> Press B For Bike\n-> Press C For Car\n-> Press T for Truck\n";
		cin >> input;
		if (input == 'B' || input == 'b')
		{
			double height = 0;
			cout << "Enter Height : ";
			cin >> height;
			bool selfStart = false;
			cout << "Press 1 for Self Start : ";
			cin >> input;
			if (input == '1')
			{
				selfStart = true;
			}
			bool discBrake = false;
			cout << "Press 1 for DiscBrake : ";
			cin >> input;
			if (input == '1')
			{
				discBrake = true;
			}
			Bike bike(companyName, color, wheels, power, height, selfStart, discBrake);
			shop.addVehicle(&bike);
			Menu(shop);
		}
		if (input == 'C' || input == 'c')
		{
			int doors = 0;
			cout << "Enter Number of Doors : ";
			cin >> doors;
			int seats = 0;
			cout << "Enter Number of Seats : ";
			cin >> seats;
			string temp_transmission = "\0";
			cout << "Enter Transmission Type : ";
			cin >> temp_transmission;
			size = temp_transmission.length() + 1;
			char* transmission = new char[size];
			strcpy_s(transmission, size, temp_transmission.c_str());
			Car car(companyName, color, wheels, power, doors, seats, transmission);
			shop.addVehicle(&car);
			Menu(shop);
		}
		if (input == 'T' || input == 't')
		{
			double containerSize = 0;
			cout << "Enter Container Size : ";
			cin >> containerSize;
			string temp_category = "\0";
			cout << "Enter Category : ";
			cin >> temp_category;
			size = temp_category.length() + 1;
			char* category = new char[size];
			strcpy_s(category, size, temp_category.c_str());
			bool fourWheelDrive = false;
			cout << "Press 1 for Four Wheel Drive : ";
			cin >> input;
			if (input == '1')
			{
				fourWheelDrive = true;
			}
			Truck truck(companyName, color, wheels, power, category, containerSize, fourWheelDrive);
			shop.addVehicle(&truck);
			Menu(shop);
		}
	}
	else if (input == 'F' || input == 'f')
	{
		string temp = "\0";
		cout << "Enter Type e.g.(Bike, Car, Truck) : ";
		cin >> temp;
		int size = temp.length() + 1;
		char* type = new char[temp.length() + 1];
		strcpy_s(type, size, temp.c_str());
		shop.DisplayByType(type);
	}
	else if (input == 'Q' || input == 'q')
	{
		cout << "Closing Program!\n";
		exit(0);
	}
	else
	{
		cout << "Invalid Input!";
		exit(-1);
	}
}
int main() {
	BilalMotors shop;
	Menu(shop); 
	return 0;
}