#include "Room.h"
#include<iostream>
using namespace std;

Room::Room()
{
	obj = new Chair * [15];
	no_chairs = 0;
	area = 0;
}
Room::Room(float a, int no)
{
	area = a;
	no_chairs = no;
	obj = new Chair * [no_chairs];

}
Room::Room(const Room& r_obj)
{
	area = r_obj.area;
	no_chairs = r_obj.no_chairs;

}
void Room::addChair(Chair* c_obj, int no)
{
	no_chairs = no;
	obj = new Chair * [no];
	for (int i = 0; i < no; i++)
	{
		obj[i] = c_obj;

	}
}

Chair** Room::getchair()const
{
	return obj;
}
Room::~Room()
{
	delete[]obj;
	obj = nullptr;
}

void Room::display()const
{
	cout << "Area:" << area << endl;
	cout << "Chairs:" << no_chairs << endl;
	for (int i = 0; i < no_chairs; i++){
		cout << obj[i]->getType() << endl;
	}
}

void Room::setno_chairs(int no)
{
	no_chairs = no;
}
int Room::getno_chair()const
{
	return no_chairs;
}
void Room::set_area(float a)
{
	area = a;
}
float Room::getarea()const
{
	return area;
}