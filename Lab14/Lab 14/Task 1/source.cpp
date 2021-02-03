#include<iostream>
#include"Point.h"
#include"Creatur.h"
using namespace std;
int main()
{
	Point obj;
	obj.setX(5);
	obj.setY(6);
	cout << "\nCurrent Location\n";
	obj.display();
	Creatur obj1("Umair",obj);

	cout << "\nEnter Character For Desired Option\n";
	cout << "\nD-> StepDown";
	cout << "\nU-> Step Up";
	cout << "\nL-> Step Left";
	cout << "\nR-> Step Right\n";
	char c;
	cout << "->"; cin >> c;
	obj1.move(c);
	obj1.display();
}