#include "Shape.h"
#pragma once
class Square : public Shape
{
public:
	Square();
	Square(double length);
	double area();
	double perimeter();
	~Square();
};

