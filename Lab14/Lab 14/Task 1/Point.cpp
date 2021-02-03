#include "Point.h"
#include<iostream>
using namespace std;

Point::Point()
{
	x = 0;
	y= 0;
}
Point::Point(int a, int b)
{
	x = a;
	y = b;
}
Point::Point(const Point& obj)
{
	x = obj.x;
	y = obj.y;
}
void Point::display()
{
	cout << "\nCordinate X(Lef/Right) :" << x;
	cout << "\nCordinate Y(Up/Down) :" <<y<<endl;
}

Point::~Point()
{
	x = 0;
	y = 0;
}
void Point::setX(int a)
{
	x = a;
}
void Point::setY(int b)
{
	y = b;
}
int Point::getX()const
{
	return x;
}
int Point::getY()const
{
	return y;
}