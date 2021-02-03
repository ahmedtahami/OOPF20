#include "Square.h"
Square::Square() : Shape() {};
Square::Square(double length) : Shape(length) {};
double Square::area() {
	double temp = getLength();
	return temp * temp;
}
double Square::perimeter() {
	double temp = getLength();
	return 4 * temp;
}
Square::~Square() {};