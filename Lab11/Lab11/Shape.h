#pragma once
class Shape
{
private:
	double Length;
public:
	Shape();
	Shape(double length);
	virtual double area();
	virtual double perimeter();
	double getLength();
	~Shape();
};

