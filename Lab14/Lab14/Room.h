#pragma once
#include "Chair.h"
class Room
{
private:
	double Area; //sq. ft
	int NumberOfChairs;
	Chair* Chairs;
public:
	Room();
	Room(double, int chairs = 0);
	Room(const Room&);
	void addChair(const Chair&);
	void setArea(double);
	double getArea();
	void Display();
	~Room();
};

