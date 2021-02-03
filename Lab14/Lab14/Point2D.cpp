#include "Point2D.h"
#include <iostream>
Point2D::Point2D() {
	X = 0;
	Y = 0;
}
Point2D::Point2D(int x, int y) {
	X = x;
	Y = y;
}
Point2D::Point2D(const Point2D& obj) {
	X = obj.X;
	Y = obj.Y;
}
void Point2D::setX(int x) {
	X = x;
}
int Point2D::getX() {
	return X;
}
void Point2D::setY(int y) {
	Y = y;
}
int Point2D::getY() {
	return Y;
}
void Point2D::operator=(const Point2D& obj) {
	X = obj.X;
	Y = obj.Y;
}
Point2D::~Point2D() {
	X = 0;
	Y = 0;
}