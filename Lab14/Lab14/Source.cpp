#include<iostream>
#include "Creature.h"
#include "Chair.h"
using namespace std;
int main() {
	Creature c;
	c.setLocation(10);
	c.Display();
	c.moveUp();
	c.moveUp();
	c.moveUp();
	c.moveDown();
	c.moveRight();
	c.Display();
	char* a = new char[7]{ "Wooden" };
	Chair chair;
	chair.setType(a);
	cout << chair.getType();
	return 0;
}