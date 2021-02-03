#include "ComplexN.h"
ComplexN::ComplexN()
{
	Real = 0;
	Imaginary = 0;
}
ComplexN::ComplexN(int _real, int _imaginary) : ComplexN()
{
	Real = _real;
	Imaginary = _imaginary;
}
void ComplexN::setReal(int _real)
{
	Real = _real;
}
int ComplexN::getReal()
{
	return Real;
}
void ComplexN::setImaginary(int _imaginary)
{
	Imaginary = _imaginary;
}
int ComplexN::getImaginary()
{
	return Imaginary;
}
ComplexN ComplexN::Addition(ComplexN a, ComplexN b)
{
	int real = a.getReal() + b.getReal();
	int imaginary = a.getImaginary() + b.getImaginary();
	ComplexN result(real,imaginary);
	return result;
}
ComplexN ComplexN::Subtraction(ComplexN a, ComplexN b)
{
	int real = a.getReal() - b.getReal();
	int imaginary = a.getImaginary() - b.getImaginary();
	ComplexN result(real, imaginary);
	return result;
}
ComplexN ComplexN::Multiplication(ComplexN a, ComplexN b)
{
	int real = a.getReal() * b.getReal() + (a.getImaginary() * b.getImaginary()) * (-1);
	int imaginary = a.getReal() * b.getImaginary() + a.getImaginary() * b.getReal();
	ComplexN result(real, imaginary);
	return result;
}