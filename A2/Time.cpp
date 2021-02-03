#include "Time.h"
#include<iostream>
using namespace std;
Time::Time() {
	Hours = 0;
	Minutes = 0;
	Seconds = 0;
	am_pm = nullptr;
	twentyFourHoursFormat = true;
}
Time::Time(int hh, int mm, int ss, bool twentyFourHoursFormat = true, bool AM = false, bool PM = false) {
	
	this->Hours = hh;
	this->Minutes = mm;
	this->Seconds = ss;
	if (twentyFourHoursFormat)
	{
		this->twentyFourHoursFormat = true;
		am_pm = nullptr;
	}
	else if(PM)
	{
		this->twentyFourHoursFormat = false;
		am_pm = attr[1];
	}
	else if (AM)
	{
		this->twentyFourHoursFormat = false;
		am_pm = attr[0];
	}
	bool result = validateTime();
	if (result)
	{
		cout << "Time is in correct format.\n";
	}
	else
	{
		cout << "Time is in incorrect format. Defult values are assigned to members.\n";
		Hours = 0;
		Minutes = 0;
		Seconds = 0;
		am_pm = nullptr;
		twentyFourHoursFormat = true;
	}
}
Time::Time(const Time& ref) {
	Hours = ref.Hours;
	Minutes = ref.Minutes;
	Seconds = ref.Seconds;
	twentyFourHoursFormat = ref.twentyFourHoursFormat;
	am_pm = ref.am_pm;
}
bool Time::copyTime(Time& ref) {
	Hours = ref.Hours;
	Minutes = ref.Minutes;
	Seconds = ref.Seconds;
	twentyFourHoursFormat = ref.twentyFourHoursFormat;
	am_pm = ref.am_pm;
	bool result = validateTime();
	if (result)
	{
		cout << "Time is in correct format.\n";
		return true;
	}
	else
	{
		cout << "Time is in incorrect format. Defult values are assigned to members.\n";
		Hours = 0;
		Minutes = 0;
		Seconds = 0;
		am_pm = nullptr;
		twentyFourHoursFormat = true;
		return false;
	}
}
bool Time::inputCompleteTime(int hh, int mm, int ss, bool twentyFourHoursFormat = true, bool AM = false, bool PM = false) {
	this->Hours = hh;
	this->Minutes = mm;
	this->Seconds = ss;
	if (twentyFourHoursFormat)
	{
		this->twentyFourHoursFormat = true;
		am_pm = nullptr;
	}
	else if (PM)
	{
		this->twentyFourHoursFormat = false;
		am_pm = attr[1];
	}
	else if (AM)
	{
		this->twentyFourHoursFormat = false;
		am_pm = attr[0];
	}
	bool result = validateTime();
	if (result)
	{
		cout << "Time is in correct format.\n";
		return true;
	}
	else
	{
		cout << "Time is in incorrect format. Defult values are assigned to members.\n";
		Hours = 0;
		Minutes = 0;
		Seconds = 0;
		am_pm = nullptr;
		twentyFourHoursFormat = true;
		return false;
	}
}
Time& Time::getTime() const {
	Time obj;
	obj.Hours = this->Hours;
	obj.Minutes = this->Minutes;
	obj.Seconds = this->Seconds;
	obj.am_pm = this->am_pm;
	obj.twentyFourHoursFormat = this->twentyFourHoursFormat;		
	return obj;
}
void Time::retriveTime(int& hh, int& mm, int& ss) const {
	hh = this->Hours;
	mm = this->Minutes;
	ss = this->Seconds;
}
void Time::showTime() const {
	if (twentyFourHoursFormat)
	{
		cout << "Time : " << Hours << ":" << Minutes << ":" << Seconds << endl;
	}
	else
	{
		cout << "Time : " << Hours << ":" << Minutes << ":" << Seconds << " " << am_pm << endl;
	}
}
bool Time::isEqual(Time& ref) const {
	if ((this->Hours == ref.Hours) && (this->Minutes == ref.Minutes) && (this->Seconds == ref.Seconds) && (this->am_pm == ref.am_pm) && (this->twentyFourHoursFormat == ref.twentyFourHoursFormat))
		return true;
	else
		return false;
}
void Time::setHours(int hh, bool twentyFourHoursFormat) {
	if (twentyFourHoursFormat)
	{
		if (hh >= 0 && hh <= 23)
		{
			this->Hours = hh;
		}
	}
	else if (!twentyFourHoursFormat)
	{
		if (hh >= 1 && hh <= 12)
		{
			this->Hours = hh;
		}
	}
	else
	{
		cout << "Invalid Input!\n";
		exit(-1);
	}
}
void Time::setMinutes(int mm) {
	if (mm >= 0 && mm <= 59)
	{
		this->Minutes = mm;
	}
	else
	{
		cout << "Invalid Input!\n";
		exit(-1);
	}
}
void Time::setSeconds(int ss) {
	if (ss >= 0 && ss <= 59)
	{
		this->Seconds = ss;
	}
	else
	{
		cout << "Invalid Input!\n";
		exit(-1);
	}
}
void Time::setFormat(bool twentyFourHoursFormat, bool AM, bool PM) {
	if (twentyFourHoursFormat)
	{
		this->twentyFourHoursFormat = true;
	}
	else if (!twentyFourHoursFormat)
	{
		if (AM)
		{
			this->twentyFourHoursFormat = false;
			am_pm = attr[0];
		}
		else if (PM)
		{
			this->twentyFourHoursFormat = false;
			am_pm = attr[1];
		}
	}
}
int Time::getHours() const {
	return Hours;
}
int Time::getMinutes() const {
	return Minutes;
}
int Time::getSeconds() const {
	return Seconds;
}
bool Time::validateTime() {
	bool hoursVal = false;
	bool minutesVal = false;
	bool secondsVal = false;
	if (twentyFourHoursFormat == true && attr == nullptr)
	{
		if (this->Hours >= 0 && this->Hours <= 23)
		{
			hoursVal = true;
		}
	}
	else if(twentyFourHoursFormat == false && attr != nullptr)
	{
		if (this->Hours >= 1 && this->Hours <= 12)
		{
			hoursVal = true;
		}
	}
	if (Minutes >= 0 && Minutes <= 59)
	{
		minutesVal = true;
	}
	if (Seconds >= 0 && Seconds <= 59)
	{
		secondsVal = true;
	}

	if (hoursVal && minutesVal && secondsVal)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void Time::Converto24() {
	if (twentyFourHoursFormat == true)
	{
		cout << "Already in 24-Hours Format.";
		exit(-1);
	}
	if (am_pm == attr[0])
	{
		am_pm = nullptr;
		twentyFourHoursFormat = true;
	}
	else if(am_pm == attr[1])
	{
		Hours = Hours + 12;
		am_pm = nullptr;
		twentyFourHoursFormat = true;
	}
}
void Time::Converto12() {
	if (am_pm != nullptr)
	{
		cout << "Already in 12-Hours Format.";
		exit(-1);
	}
	if (Hours < 12)
	{
		if (Hours == 0)
		{
			Hours = 12;
		}
		am_pm = attr[0];
		twentyFourHoursFormat = false;
	}
	else if (Hours >= 12)
	{
		if (Hours != 12)
		{
			Hours = Hours - 12;
		}
		am_pm = attr[1];
		twentyFourHoursFormat = false;		
		
	}
}
Time::~Time() {
	delete[] attr;
	*attr = nullptr;
	delete[] am_pm;
	am_pm = nullptr;
	twentyFourHoursFormat = true;
	Hours = 0;
	Minutes = 0;
	Seconds = 0;
}