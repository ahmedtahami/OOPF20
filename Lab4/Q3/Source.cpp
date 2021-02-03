#include<iostream>
#include "ComplexN.h"
#include "Employee.h"
#include "Car.h"
using namespace std;
int main()
{
	char* car1Name = new char[5] {"Vitz"};
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
	cout << "Car2 Year: " << car2.getYear() << endl;

	//Car 2 color not changed but i think it should change, because it stores refrence to color of car1
	return 0;
}
