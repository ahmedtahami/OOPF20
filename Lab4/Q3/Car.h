#pragma once
#include <string>
class Car
{
private:
	char* Name;
	char* Manufacturer;
	char* Color;
	int Year;
public:
	Car();
	Car(char*, char*, char*, int);
	void setName(char*);
	char* getName();
	void setManufacturer(char*);
	char* getManufacturer();
	void setColor(char*);
	char* getColor();
	void setYear(int);
	int getYear();
	void Display();
};

