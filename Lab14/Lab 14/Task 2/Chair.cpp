#include "Chair.h"
#include<iostream>
using namespace std;

Chair::Chair()
{
	type = nullptr;
}
Chair::Chair(char* t)
{
	int len = 0;
	while (t[len] != '\0')
	{
		len++;
	}
	type = new char[len + 1];
	for (int i = 0; i < len; i++)
	{
		type[i] = t[i];
	}
	type[len] = '\0';
}
void Chair::setType(char* t)
{
	int len = 0;
	while (t[len] != '\0')
	{
		len++;
	}
	type = new char[len + 1];
	for (int i = 0; i < len; i++)
	{
		type[i] = t[i];
	}
	type[len] = '\0';
}
char* Chair::getType()
{
	char* localtemp;
	int len = 0;
	while (type[len] != '\0')
	{
		len++;
	}
	localtemp = new char[len + 1];
	for (int i = 0; i < len; i++)
	{
		localtemp[i] = type[i];
	}
	localtemp[len] = '\0';
	return localtemp;
}
Chair::~Chair()
{
	delete[]type;
	type = nullptr;
}
Chair::Chair(const Chair& obj)
{
	int len = 0;
	while (obj.type[len] != '\0')
	{
		len++;
	}
	type = new char[len + 1];
	for (int i = 0; i < len; i++)
	{
		type[i] = obj.type[i];
	}
	type[len] = '\0';
}


void Chair::display()
{
	cout << "Type of Chair :" << type << endl;
}