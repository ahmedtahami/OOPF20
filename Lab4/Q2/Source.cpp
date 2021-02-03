#include<iostream>
#include "Employee.h"
using namespace std;
int main()
{
	Employee* employees = new Employee[3];
	string DOBs[3] = { "15102000","15101985","15101990" };
	string JoiningDates[3] = { "15102000","15101985","15101990" };
	char Names[3][20] = { "Ahmed","Ali","Aslam" };
	for (int i = 0; i < 3; i++)
	{
		employees[i].setCode(i+1);
		employees[i].setName(Names[i]);
		employees[i].setDOB(DOBs[i]);
		employees[i].setDOB(JoiningDates[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		if (employees[i].getAge() >= 30)
		{
			cout << "Employee " << i + 1 << ":\n";
			cout << "Employee Code : " << employees[i].getCode() << " \n";
			cout << "Employee Name : " << employees[i].getName() << " \n";
			cout << "Employee DOB : " << employees[i].getDOB() << " \n";
			cout << "Employee Joining Date : " << employees[i].getJoiningDate() << " \n";
			cout << "Employee Age : " << employees[i].getAge() << " \n";
			cout << endl;
		}
	}
	return 0;
}
