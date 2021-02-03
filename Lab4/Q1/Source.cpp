#include<iostream>
#include "ComplexN.h"
using namespace std;
int main()
{
	ComplexN a(3, 2);
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
	cout << "Imaginary Part is " << (result.getImaginary()) << endl;

	return 0;
}
