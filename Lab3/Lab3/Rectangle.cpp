#include "Rectangle.h"
#include<iostream>

Rectangle::Rectangle()
{
	length = 1.0;
	width = 1.0;
	Display();
}
void Rectangle::Display()
{
	std::cout << "Default values are Intialized from constructor" << std::endl;
}
void Rectangle::setLength(float _length)
{
	if (_length > 0.0 && _length < 20.0)
		length = _length;
}
void Rectangle::setWidth(float _width)
{
	if (_width > 0.0 && _width < 20.0)
		width = _width;
}
float Rectangle::getLength()
{
	return length;
}
float Rectangle::getWidth()
{
	return width;
}
float Rectangle::calculateArea()
{
	return (length * width);
}
float Rectangle::calculatePerimeter()
{
	return 2 * (length + width);
}