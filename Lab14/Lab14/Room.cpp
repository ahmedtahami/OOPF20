#include "Room.h"
#include <iostream>
using namespace std;
Room::Room() {
	Area = 0;
	NumberOfChairs = 0;
	Chairs = nullptr;
}
Room::Room(double area, int nOfChairs) {
	Area = area;
	NumberOfChairs = nOfChairs;
	Chairs = new Chair[NumberOfChairs];
}
Room::Room(const Room& obj) {
	Area = obj.Area;
	NumberOfChairs = obj.NumberOfChairs;
	Chairs = new Chair[NumberOfChairs];
	for (int i = 0; i < obj.NumberOfChairs; i++)
	{
		*(Chairs + i) = *(obj.Chairs + i);
	}
}
void Room::addChair(const Chair& obj) {
	Chair* temp = new Chair[NumberOfChairs];
	for (int i = 0; i < NumberOfChairs; i++)
	{
		*(temp + i) = *(Chairs + i);
	}
	NumberOfChairs++;
	delete[] Chairs;
	Chairs = nullptr;
	Chairs = new Chair[NumberOfChairs];
	for (int i = 0; i < NumberOfChairs; i++)
	{
		*(temp + i) = *(Chairs + i);
	}
}
void Room::setArea(double area) {
	Area = area;
}
double Room::getArea() {
	return Area;
}
void Room::Display(){
	cout << "Number of Chairs" << NumberOfChairs << endl;
	for (int i = 0; i < NumberOfChairs; i++)
	{
		cout << "Type of Chair " << i + 1 << ": " << *(Chairs + i)->getType() << endl;
	}
}
Room::~Room() {
	delete[] Chairs;
	Chairs = nullptr;
	Area = 0;
	NumberOfChairs = 0;

}