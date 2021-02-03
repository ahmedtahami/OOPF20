#include "Person.h"
#include<string>
#include<iostream>
using namespace std;
Person::Person() {
	Name = nullptr;
	Age = 0;
}
Person::Person(const char* name, const int age) {
	int size = strlen(name) + 1;
	Name = new char[size];
	for (int i = 0; i < size; i++)
	{
		*(Name + i) = *(name + i);
	}
	Name[size - 1] = '\0';
	Age = age;
}
Person::Person(const Person& ref) {
	int size = strlen(ref.Name) + 1;
	Name = new char[size];
	for (int i = 0; i < size; i++)
	{
		*(Name + i) = *(ref.Name + i);
	}
	Name[size - 1] = '\0';
	Age = ref.Age;
}
void Person::setAge(const int age) {
	Age = age;
}
void Person::setName(const char* name) {
	int size = strlen(name) + 1;
	Name = new char[size];
	for (int i = 0; i < size; i++)
	{
		*(Name + i) = *(name + i);
	}
	Name[size - 1] = '\0';
}
char* Person::getName() {
	int size = strlen(Name) + 1;
	char* name = new char[size];
	for (int i = 0; i < size; i++)
	{
		*(name + i) = *(Name + i);
	}
	name[size - 1] = '\0';
	return name;
}
int Person::getAge() {
	int age = Age;
	return age;
}
void Person::Display()
{
	cout << "Name : " << getName() << endl;
	cout << "Age : " << getAge() << endl;
}

Person::~Person() {
	delete Name;
	Name = nullptr;
	Age = 0;
}