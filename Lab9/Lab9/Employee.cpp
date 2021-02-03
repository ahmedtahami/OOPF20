#include "Employee.h"
#include<iostream>
using namespace std;
Employee::Employee() : Person() {
	Salary = 0;
	EmployeeId = 0;
}
Employee::Employee(const Employee& ref) : Person(ref){
	EmployeeId = ref.EmployeeId;
	Salary = ref.Salary;
}
Employee::Employee(int id, const char* name, const int age, double salary) : Person(name, age) {
	EmployeeId = id;
	Salary = salary;
}
void Employee::setSalary(double salary) {
	Salary = salary;
}
void Employee::setId(int id) {
	EmployeeId = id;
}
int Employee::getId() {
	int temp = EmployeeId;
	return temp;
}
double Employee::getSalary() {
	double temp = Salary;
	return temp;
}
void Employee::Display() {
	cout << "Id : " << EmployeeId << endl;
	Person::Display();
	cout << "Salary : " << Salary << endl;
}
Employee::~Employee(){
	Salary = 0;
	EmployeeId = 0;
}