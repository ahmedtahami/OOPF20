#include "Trapezium.h"
Trapezium::Trapezium() : Shape(){
	Height = 0;
	Base = 0;
	C = 0;
	D = 0;
}
Trapezium::Trapezium(double length, double base, double c, double d, double height) : Shape(length){
	Height = height;
	Base = base;
	C = c;
	D = d;
}
void Trapezium::setBase(double base) {
	Base = base;
}
void Trapezium::setC(double c) {
	C = c;
}
void Trapezium::setD(double d) {
	D = d;
}
void Trapezium::setHeight(double height) {
	Height = height;
}
double Trapezium::getBase() {
	double temp = Base;
	return temp;
}
double Trapezium::getC() {
	double temp = C;
	return temp;
}
double Trapezium::getD() {
	double temp = D;
	return temp;
}
double Trapezium::getHeight() {
	double temp = Height;
	return temp;
}
double Trapezium::area() {
	double area = ((getLength() + Base) / 2) * Height;
	return area;
}
double Trapezium::perimeter() {
	double perimeter = getLength() + Base + C + D;
	return perimeter;
}
Trapezium::~Trapezium() {
	Base = 0;
	Height = 0;
	C = 0;
	D = 0;
}