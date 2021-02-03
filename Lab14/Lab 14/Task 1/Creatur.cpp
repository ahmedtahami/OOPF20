#include "Creatur.h"
Creatur::Creatur()
{
	name = "No name";
	location.setX(0);
	location.setY(0);
}
Creatur::Creatur(string n,Point&obj)
{
	name = n;
	location.setX(obj.getX());
	location.setY(obj.getY());
}
Creatur::Creatur(const Creatur& obj)
{
	name = obj.name;
}
Creatur::~Creatur()
{
	name = "";
}
void Creatur::display()
{
	cout << "\nCreatur Name :" << name;
	cout << "\nCordinate X(Lef/Right) :"<<location.getX();
	cout << "\nCordinate Y(Up/Down) :" << location.getY()<<endl;
}
void Creatur::setname(string n)
{
	name = n;
}
string Creatur::getname()const
{
	return name;
}
void Creatur::move(char c)
{ 
	int x = location.getX();
	int y = location.getY();
	switch (c)
	{
	case'U':
	{
		if (y > 0)
		{
			y--;

			location.setY(y);
		}
		else
		{
			cout << "\nThere's Nothing Left To Up the Creature\n";
		}

	}break;
	case'D':
	{
		y++;
		location.setY(y);
	}break;

	case'L':
	{
		if (x > 0)
		{
			x--;
			location.setX(x);
		}
	}break;
	case'R':
	{
		x++;
		location.setX(x);
	}break;
	default:
	{
		cout << "\nYou Opted Wrong Option\n";
	}
	}

}