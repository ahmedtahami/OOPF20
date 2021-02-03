#pragma once
#include "Person.h"
class Employee : public Person
{
private:
	int EmployeeId;
	double Salary;
public:
	Employee();
	Employee(const Employee&);
	Employee(int Id, const char* name, const int age, double salary);
	void setSalary(double);
	void setId(int);
	int getId();
	double getSalary();
	void Display();
	~Employee();
};

