#include "Name.h"
#include<iostream>
using namespace std;
int Name::strlength(char* arr)
{
	int i = 0;
	while (arr[i] != '\0')
	{
		i++;
	}
	return i;
}
char* Name::strcpy(char* arr)
{
	int size = strlength(arr);
	char* temp = new char[size];
	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	*(temp + size) = '\0';
	return temp;
}
char* Name::strConcat(char* arr1, char* arr2, bool addSpace = true)
{
	int size1 = strlength(arr1);
	int size2 = strlength(arr2);
	int size = size1 + size2 + 1;
	char* temp = new char[size];
	for (int i = 0; i < size1; i++)
	{
		*(temp + i) = *(arr1 + i);
	}
	if (addSpace)
	{
		*(temp + size1) = ' ';
		int i = 0;
		for (int j = size1 + 1; j < size; j++)
		{
			*(temp + j) = *(arr2 + i);
			i++;
		}
	}
	else
	{
		int i = 0;
		for (int j = size1; j < size; j++)
		{
			*(temp + j) = *(arr2 + i);
			i++;
		}
	}
	
	*(temp + size) = '\0';
	return temp;
}
char* Name::strToLower(char* arr) {
	for (int i = 0; i < strlength(arr); i++)
	{
		if (arr[i] >= 65 && arr[i] <= 90)
			arr[i] = arr[i] + 32;
	}
	return arr;
}
char* Name::strToUpper(char* arr)
{
	for (int i = 0; i < strlength(arr); i++)
	{
		if (arr[i] >= 97 && arr[i] <= 122)
			arr[i] = arr[i] - 32;
	}
	return arr;
}
Name::Name()
{
	firstName = nullptr;
	lastName = nullptr;
}
Name::Name(char* _firstName, char* _lastName) {
	firstName = new char[strlength(_firstName)];
	lastName = new char[strlength(_lastName)];
	for (int i = 0; i < strlength(_firstName); i++)
	{
		*(firstName + i) = *(_firstName + i);
	}
	for (int i = 0; i < strlength(_lastName); i++)
	{
		*(lastName + i) = *(_lastName + i);
	}
	bool validator = isValidName();
	if (!validator)
	{
		this->firstName = nullptr;
		this->lastName = nullptr;
		cout << "Name not valid it may contain special characters or digits.\n";
		exit(-1);
	}
}
Name::Name(const Name& ref) {
	this->firstName = ref.firstName;
	this->lastName = ref.lastName;
}
void Name::copyName(Name& ref) {
	this->firstName = ref.firstName;
	this->lastName = ref.lastName;
}
void Name::camelCase() {
	toLower();
	firstName[0] = firstName[0] - 32;
	lastName[0] = lastName[0] - 32;
}
void Name::toLower() {
	firstName = strToLower(firstName);
	lastName = strToLower(lastName);
}
void Name::toUpper() {
	firstName = strToUpper(firstName);
	lastName = strToUpper(lastName);
}
int Name::nameLength() {
	int size = strlength(this->firstName);
	size = size + strlength(this->lastName);
	return size;
}
void Name::swapNames() {
	char* temp = strcpy(firstName);
	firstName = lastName;
	lastName = temp;
}
void Name::display() {
	cout << "Name : " << firstName << " " << lastName << endl;
}
char* Name::fullName(bool addSpace = true) {
	char* fullName = strConcat(firstName, lastName, addSpace);
	return fullName;
}
bool Name::isValidName() {
	bool validator = false;
	for (int i = 0; i < strlength(firstName); i++)
	{
		if ((firstName[i] >= 65 && firstName[i] <= 90) || (firstName[i] >= 97 && firstName[i] <= 122))
			validator = true;
		else
			return false;
	}
	for (int i = 0; i < strlength(lastName); i++)
	{
		if ((lastName[i] >= 65 && lastName[i] <= 90) || (lastName[i] >= 97 && lastName[i] <= 122))
			validator = true;
		else
			return false;
	}
	if (validator)
		return true;
}
Name Name::operator= (const Name& ref) {
	firstName = ref.firstName;
	lastName = ref.lastName;
	return *this;
}
Name::~Name() {
	delete[] firstName;
	firstName = nullptr;
	delete[] lastName;
	lastName = nullptr;
}