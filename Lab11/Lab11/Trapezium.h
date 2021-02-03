#pragma once
#include "Shape.h"
class Trapezium : public Shape
{
private:
	double Base;
	double C;
	double D;
	double Height;
public:
	Trapezium();
	Trapezium(double length, double base, double c, double d, double height);
	void setBase(double);
	void setC(double);
	void setD(double);
	void setHeight(double);
	double getBase();
	double getC();
	double getD();
	double getHeight();
	double area();
	double perimeter();
	~Trapezium();
};

