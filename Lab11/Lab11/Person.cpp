#include "Person.h"
#include <string>
#include <iostream>
using namespace std;
Person::Person() {
	Name = nullptr;
	Address = nullptr;
	PhoneNumber = nullptr;
}
Person::Person(const Person& ref) {
	Name = nullptr;
	Address = nullptr;
	PhoneNumber = nullptr;
	Name = cpyDeep(ref.Name);
	Address = cpyDeep(ref.Address);
	PhoneNumber = cpyDeep(ref.PhoneNumber);
}
Person::Person(char* name, char* address, char* phoneNumber) {
	Name = cpyDeep(name);
	Address = cpyDeep(address);
	PhoneNumber = cpyDeep(phoneNumber);
}
void Person::setName(char* name) {
	if (Name)
	{
		delete[] Name;
		Name = nullptr;
	}
	Name = cpyDeep(name);
}
void Person::setAddress(char* address) {
	if (Address)
	{
		delete[] Address;
		Address = nullptr;
	}
	Address = cpyDeep(address);
}
void Person::setPhoneNumber(char* phoneNumber) {
	if (PhoneNumber)
	{
		delete[] PhoneNumber;
		PhoneNumber = nullptr;
	}
	PhoneNumber = cpyDeep(phoneNumber);
}
char* Person::getName() {
	char* temp = new char[strlen(Name)];
	temp = cpyDeep(Name);
	return temp;
}
char* Person::getAddress() {
	char* temp = new char[strlen(Address)];
	temp = cpyDeep(Address);
	return temp;
}
char* Person::getPhoneNumber() {
	char* temp = new char[strlen(PhoneNumber)];
	temp = cpyDeep(PhoneNumber);
	return temp;
}
void Person::Display() {
	cout << "Name : " << getName() << endl;
	cout << "Address : " << getAddress() << endl;
	cout << "Phone Number : " << getPhoneNumber() << endl;
}
char* Person::cpyDeep(char* arr) {
	int size = strlen(arr) + 1;
	char* temp = new char[size];
	for (int i = 0; i < size; i++)
	{
		*(temp + i) = *(arr + i);
	}
	*(temp + (size - 1)) = '\0';
	return temp;
}
Person::~Person() {
	if (Name)
	{
		delete[] Name;
		Name = nullptr;
	}
	if (Address)
	{
		delete[] Address;
		Address = nullptr;
	}
	if (PhoneNumber)
	{
		delete[] PhoneNumber;
		PhoneNumber = nullptr;
	}
}