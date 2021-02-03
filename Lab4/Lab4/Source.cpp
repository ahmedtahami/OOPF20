#include<iostream>
#include "ComplexN.h"
#include "Employee.h"
#include "Car.h"
#include "Process.h"
using namespace std;
int main()
{
#pragma region Question1
	/*ComplexN a(3, 2);
	ComplexN b(1, 7);

	ComplexN result = result.Addition(a, b);

	cout << "Addition: " << endl;
	cout << "Real Part is " << (result.getReal()) << endl;
	cout << "Imaginary Part is " << (result.getImaginary()) << endl;

	result = result.Subtraction(a, b);

	cout << "\nSubtraction: " << endl;
	cout << "Real Part is " << (result.getReal()) << endl;
	cout << "Imaginary Part is " << (result.getImaginary()) << endl;

	result = result.Multiplication(a, b);

	cout << "\nMultiplication: " << endl;
	cout << "Real Part is " << (result.getReal()) << endl;
	cout << "Imaginary Part is " << (result.getImaginary()) << endl;*/
#pragma endregion

#pragma region Question 2
	/*Employee* employees = new Employee[3];
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
	}*/
#pragma endregion

#pragma region Question 3
	/*char* car1Name = new char[5] {"Vitz"};
	char* car1Manufacture = new char[7] {"Toyota"};
	char* car1Color = new char[5] {"Blue"};
	Car car1(car1Name, car1Manufacture, car1Color, 2008);
	cout << "Before Changing Color of Car1\n";
	cout << "Car1 Details:\n";
	car1.Display();

	Car car2(car1.getName(), car1.getManufacturer(), car1.getColor(), car1.getYear());
	cout << "Car2 Details:\n";
	cout << "Car2 Name: " << car2.getName() << endl;
	cout << "Car2 Manufacturer: " << car2.getManufacturer() << endl;
	cout << "Car2 Color: " << car2.getColor() << endl;
	cout << "Car2 Year: " << car2.getYear() << endl;

	car1Color = new char[5] {"Red"};
	car1.setColor(car1Color);
	cout << "After Changing Color of Car1\n";
	cout << "Car1 Details:\n";
	car1.Display();
	cout << "Car2 Details:\n";
	cout << "Car2 Name: " << car2.getName() << endl;
	cout << "Car2 Manufacturer: " << car2.getManufacturer() << endl;
	cout << "Car2 Color: " << car2.getColor() << endl;
	cout << "Car2 Year: " << car2.getYear() << endl;*/

	//Car 2 color not changed but i think it should change, because it stores refrence to color of car1
#pragma endregion
	Process p;
	Process* ptr = new Process[3]{ Process(4), Process(6), Process(8) };
	cout << ptr[0].getID() << endl;
	cout << ptr[1].getID() << endl;
	cout << ptr[2].getID() << endl;
	cout << Process::getStatus() << endl;
	ptr[1].setStatus();
	cout << Process::getStatus() << endl;
	return 0;
}