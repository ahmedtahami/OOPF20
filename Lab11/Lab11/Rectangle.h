#pragma once
#include "Shape.h"
class Rectangle : public Shape
{
private:
	double Width;
public:
	Rectangle();
	Rectangle(double length, double width);
	void setWidth(double width);
	double getWidth();
	double area();
	double perimeter();
	~Rectangle();
};

