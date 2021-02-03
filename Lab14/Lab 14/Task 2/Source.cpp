#include<iostream>
#include "Chair.h"
#include "Room.h"
using namespace std;

int main()
{
	char* ch = new char[15]{ "Plastic" };
	char* ch1 = new char[12]{ "Metal" };
	Chair c1(ch);
	Room r1;
	r1.set_area(2.3);
	r1.addChair(&c1, 1);
	c1.display();
	Chair c2(ch1);
	r1.display();
	c1.setType(ch1);
	c1.display();
	r1.setno_chairs(3);
	r1.set_area(5.1);
	r1.addChair(&c2, 3);
	r1.display();


	system("pause");
	return 0;
}