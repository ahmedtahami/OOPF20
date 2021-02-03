#include <string>
#include "Point2D.h"
using namespace std;
#pragma once
class Creature
{
private:
	string Name;
	Point2D Location;
public:
	Creature();
	Creature(string,Point2D);
	Creature(string,int, int);
	Creature(const Creature&);
	void setName(string);
	string getName();
	void setLocation(const Point2D);
	void setLocation(int x = 0, int y = 0);
	Point2D getLocation();
	void Display();
	void moveUp();
	void moveDown();
	void moveLeft();
	void moveRight();
	~Creature();
};

