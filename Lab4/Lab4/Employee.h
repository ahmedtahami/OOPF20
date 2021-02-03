#pragma once
#include <string>
class Employee
{
private:
	int Code;
	char* Name;
	std::string DOB;
	std::string JoiningDate;
public:
	Employee();
	Employee(int, char*, std::string, std::string);
	void setCode(int);
	int getCode();
	void setName(char*);
	char* getName();
	void setDOB(std::string);
	std::string getDOB();
	void setJoiningDate(std::string);
	std::string getJoiningDate();
	int getAge();
};

