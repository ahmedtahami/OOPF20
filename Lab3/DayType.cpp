#include<iostream>
#include "DayType.h"

DayType::DayType()
{
	std::cout << "Welcome" << std::endl;
	Menu();
	day = 0;
}
void DayType::Menu()
{
	std::cout << "1- Monday\n2- Tuesday\n3- Wednesday\n4- Thursday\n5- Friday\n6- Saturday\n7- Sunday\n";
}
void DayType::setDay(int _day)
{
	if (_day > 0 && _day < 8)
		day = _day - 1;
	else
		std::cout << "Invalid Input!\n";
}
const char* DayType::getDay()
{
	return weekDays[day];
}
const char* DayType::getDay(int numberOfDays)
{
	int count = 0;
	for (int i = 0; i <= numberOfDays; i++)
	{
		if (i % 7 == 0)
		{
			count = 0;
		}
		count++;
	}
	return weekDays[count];
}
const char* DayType::getNextDay()
{
	if (day == 7)
		return weekDays[0];
	else
		return weekDays[day + 1];
}
const char* DayType::getPreviosDay()
{
	if (day == 1)
		return weekDays[6];
	else
		return weekDays[day - 1];
}