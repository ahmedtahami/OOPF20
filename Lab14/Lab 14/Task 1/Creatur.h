#pragma once
#include<iostream>
#include"Point.h"
using namespace std;

class Creatur
{
	string name;
	Point location;
public:
	Creatur();
	Creatur(string,Point&obj);
	Creatur(const Creatur& obj);
	void setname(string);
	string getname()const;
	void move(char);
	void display();
	~Creatur();
};

