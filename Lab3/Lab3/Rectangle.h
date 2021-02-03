#pragma once
class Rectangle
{
private:
	float length;
	float width;
public:
	Rectangle();
	void Display();
	void setLength(float _length);
	void setWidth(float _width);
	float getLength();
	float getWidth();
	float calculatePerimeter();
	float calculateArea();
};

