#pragma once
class DayType
{
private:
	const char* weekDays[7] = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
	int day;
public:
	DayType();
	void Menu();
	void setDay(int _day);
	const char* getDay();
	const char* getDay(int numberOfDays);
	const char* getNextDay();
	const char* getPreviosDay();
};

