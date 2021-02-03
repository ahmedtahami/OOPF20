#include "Salon.h"
#include<string>
Salon::Salon() : Id(rand() % 1000 + 1){
	Name = nullptr;
	Gender = nullptr;
	ContactNumber = nullptr;
	Shift = nullptr;
	Salary = 0;
}
Salon::Salon(int id, char* name, char* gender, char* contactNumber, double salary, char* shift) : Id(id) {
	delete[] Name;
	delete[] Gender;
	delete[] ContactNumber;
	delete[] Shift;
	Name = new char[strlen(name) + 1];
	for (int i = 0; i < strlen(name); i++)
	{
		*(Name + i) = *(name + i);
	}
	Name[strlen(name)] = '\0';
	Gender = new char[strlen(gender) + 1];
	for (int i = 0; i < strlen(gender); i++)
	{
		*(Gender + i) = *(gender + i);
	}
	Gender[strlen(gender)] = '\0';
	ContactNumber = new char[strlen(contactNumber) + 1];
	for (int i = 0; i < strlen(contactNumber); i++)
	{
		*(ContactNumber + i) = *(contactNumber + i);
	}
	ContactNumber[strlen(contactNumber)] = '\0';
	Salary = salary;
	Shift = new char[strlen(shift) + 1];
	for (int i = 0; i < strlen(shift); i++)
	{
		*(Shift + i) = *(shift + i);
	}
	Shift[strlen(shift)] = '\0';
}
Salon::Salon(const Salon& ref) : Id(ref.Id) {
	setName(ref.Name);
	setGender(ref.Gender);
	setContactNumber(ref.ContactNumber);
	setSalary(ref.Salary);
	setShift(ref.Shift);
}
void Salon::setName(char* name) {
	Name = new char[strlen(name) + 1];
	for (int i = 0; i < strlen(name); i++)
	{
		*(Name + i) = *(name + i);
	}
	Name[strlen(name)] = '\0';
}
void Salon::setGender(char* gender) {
	Gender = new char[strlen(gender) + 1];
	for (int i = 0; i < strlen(gender); i++)
	{
		*(Gender + i) = *(gender + i);
	}
	Gender[strlen(gender)] = '\0';
}
void Salon::setContactNumber(char* contactNumber) {
	ContactNumber = new char[strlen(contactNumber) + 1];
	for (int i = 0; i < strlen(contactNumber); i++)
	{
		*(ContactNumber + i) = *(contactNumber + i);
	}
	ContactNumber[strlen(contactNumber)] = '\0';
}
void Salon::setShift(char* shift) {
	Shift = new char[strlen(shift) + 1];
	for (int i = 0; i < strlen(shift); i++)
	{
		*(Shift + i) = *(shift + i);
	}
	Shift[strlen(shift)] = '\0';
}
void Salon::setSalary(double salary) {
	Salary = salary;
}
int Salon::getId() const {
	return Id;
}
char* Salon::getName() const {
	char* name = new char[strlen(Name) + 1];
	for (int i = 0; i < strlen(Name); i++)
	{
		*(name + i) = *(Name + i);
	}
	name[strlen(Name)] = '\0';
	return name;
}
char* Salon::getGender() const {
	char* gender = new char[strlen(Gender) + 1];
	for (int i = 0; i < strlen(Gender); i++)
	{
		*(gender + i) = *(Gender + i);
	}
	gender[strlen(Gender)] = '\0';
	return gender;
}
char* Salon::getContactNumber() const {
	char* contactNumber = new char[strlen(ContactNumber) + 1];
	for (int i = 0; i < strlen(ContactNumber); i++)
	{
		*(contactNumber + i) = *(ContactNumber + i);
	}
	contactNumber[strlen(ContactNumber)] = '\0';
	return contactNumber;
}
char* Salon::getShift() const {
	char *shift = new char[strlen(Shift) + 1];
	for (int i = 0; i < strlen(Shift); i++)
	{
		*(shift + i) = *(Shift + i);
	}
	shift[strlen(Shift)] = '\0';
	return shift;
}
double Salon::getSalary() const {
	double temp = Salary;
	return temp;
}
Salon::~Salon() {
	delete[] Name;
	Name = nullptr;
	delete[] Gender;
	Gender = nullptr;
	delete[] ContactNumber;
	ContactNumber = nullptr;
	delete[] Shift;
	Shift = nullptr;
}