#pragma once
class Point2D
{
private:
	int X;
	int Y;
public:
	Point2D();
	Point2D(int, int);
	Point2D(const Point2D&);
	void setX(int);
	int getX();
	void setY(int);
	int getY();
	void operator=(const Point2D&);
	virtual ~Point2D();
};

