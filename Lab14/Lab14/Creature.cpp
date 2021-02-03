#include "Creature.h"
#include <iostream>
Creature::Creature() {
	Name = "\0";
}
Creature::Creature(string name, int x = 0, int y = 0) {
	Name = name;
	Location.setX(x);
	Location.setY(y);
}
Creature::Creature(string name, Point2D location) {
	Name = name;
	Location = location;
}
Creature::Creature(const Creature& obj) {
	Name = obj.Name;
	Location = obj.Location;
}
void Creature::setName(string name) {
	Name = name;
}
string Creature::getName() {
	return Name;
}
void Creature::setLocation(const Point2D location) {
	Location = location;
}
void Creature::setLocation(int x, int y) {
	Location.setX(x);
	Location.setY(y);
}
Point2D Creature::getLocation() {
	return Location;
}
void Creature::Display() {
	cout << "Creature Name: " << Name << endl;
	cout << "Location:\n";
	cout << "X: " << Location.getX() << endl;
	cout << "Y: " << Location.getY() << endl;
}
void Creature::moveUp() {
	int y = Location.getY();
	y++;
	Location.setY(y);
	cout << "Moving Up!\n";
}
void Creature::moveDown() {
	int y = Location.getY();
	if (y == 0)
	{
		cout << "Creature could not go down further!\n";
		exit(-1);
	}
	y--;
	Location.setY(y);
	cout << "Moving Down!\n";
}
void Creature::moveLeft() {
	int x = Location.getX();
	if (x == 0)
	{
		cout << "Creature could not go left further!\n";
		exit(-1);
	}
	x--;
	Location.setX(x);
	cout << "Moving Left!\n";
}
void Creature::moveRight() {
	int x = Location.getX();
	x++;
	Location.setX(x);
	cout << "Moving Right!\n";
}
Creature::~Creature() {
	Name = "\0";
}