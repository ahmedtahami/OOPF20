#include "Rectangle.h"
Rectangle::Rectangle() : Shape(){
	Width = 0;
}
Rectangle::Rectangle(double length, double width) : Shape(length){
	Width = width;
}
void Rectangle::setWidth(double width) {
	Width = width;
}
double Rectangle::getWidth() {
	int temp = Width;
	return temp;
}
double Rectangle::area() {
	double area = getLength() * Width;
	return area;
}
double Rectangle::perimeter() {
	double length = getLength();
	double width = getWidth();
	return 2 * (length + width);
}
Rectangle::~Rectangle() {
	Width = 0;
}