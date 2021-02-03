#pragma once
class Point
{
	private:
		int x;
		int y;
public:
	Point();
	Point(int, int);
	Point(const Point& obj);
	~Point();
	void setX(int);
	void setY(int);
	int getX()const;
	int getY()const;
	void display();

};

