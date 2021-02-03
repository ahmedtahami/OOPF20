#pragma once
class ComplexN
{
private:
	int Real;
	int Imaginary;
public:
	ComplexN();
	ComplexN(int, int);
	void setReal(int);
	int getReal();
	void setImaginary(int);
	int getImaginary();
	ComplexN Addition(ComplexN,ComplexN);
	ComplexN Subtraction(ComplexN, ComplexN);
	ComplexN Multiplication(ComplexN, ComplexN);
};

