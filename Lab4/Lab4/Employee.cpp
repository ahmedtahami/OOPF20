#include "Employee.h"
#include <sstream>
Employee::Employee() {
	Code = 0;
	Name = nullptr;
	DOB = "\0";
	JoiningDate = "\0";
}
Employee::Employee(int code, char* name, std::string dob, std::string joiningDate) : Employee() {
	Code = code;
	Name = name;
	DOB = dob;
	JoiningDate = joiningDate;
}
void Employee::setCode(int code) {
	Code = code;
}
int Employee::getCode() {
	return Code;
}
void Employee::setName(char* name) {
	Name = name;
}
char* Employee::getName() {
	return Name;
}
void Employee::setDOB(std::string dob) {
	DOB = dob;
}
std::string Employee::getDOB() {
	return DOB;
}
void Employee::setJoiningDate(std::string joiningDate) {
	JoiningDate = joiningDate;
}
std::string Employee::getJoiningDate() {
	return JoiningDate;
}
int Employee::getAge()
{
	std::string dob = "\0";
	std::string _dob = getDOB();
	int year;
	for (int i = 4; i < 8; i++)
	{
		dob = dob + _dob[i];
	}
	std::stringstream s(dob);
	s >> year;
	return 2020 - year;
}