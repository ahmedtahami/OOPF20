#include "Shape.h"
#include<iostream>
Shape::Shape() {
	Length = 0;
}
Shape::Shape(double length) {
	Length = length;
}
double Shape::area() {
	std::cout << "Shape Class!\n";
	return 0;
}
double Shape::perimeter() {
	std::cout << "Shape Class!\n";
	return 0;
}
double Shape::getLength() {
	double temp = Length;
	return temp;
}
Shape::~Shape() {
	Length = 0;
}