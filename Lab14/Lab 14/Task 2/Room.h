#pragma once
#include "Chair.h"
class Room
{
private:
	Chair** obj;
	float area;
	int no_chairs;
public:
	Room();
	Room(float area, int no);
	Room(const Room& obj);
	void addChair(Chair* obj, int no_chairs);
	Chair** getchair()const;
	~Room();
	void setno_chairs(int);
	int getno_chair()const;
	void set_area(float);
	float getarea()const;
	void display()const;
};

