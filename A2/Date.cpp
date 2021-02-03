#include "Date.h"
#include<iostream>
using namespace std;

Date::Date() {
	Day = 1;
	Month = 1;
	Year = 2000;
}
Date::Date(int dd, int mm, int yyyy) {
	Day = dd;
	Month = mm;
	Year = yyyy;
	bool validation = validateDate();
	if (validation)
	{
		cout << "Date is in correct format.\n";
	}
	else
	{
		Day = 1;
		Month = 1;
		Year = 2000;
		cout << "Date is in incorrect format values are set to default.\n";
	}
}
Date::Date(const Date& ref){
	Day = ref.Day;
	Month = ref.Month;
	Year = ref.Year;
}
void Date::setDay(int dd){
	if (dd >= 1 && dd <= 31)
		Day = dd;
	else
		cout << "Invalid Input!\n";
}
void Date::setMonth(int mm){
	if (mm >= 1 && mm <= 12)
		Month = mm;
	else
		cout << "Invalid Input!\n";
}
void Date::setYear(int yyyy){
	if (yyyy >= 2000)
		Year = yyyy;
	else
		cout << "Invalid Input!\n";
}
int Date::getDay() const{
	return Day;
}
int Date::getMonth() const{
	return Month;
}
int Date::getYear() const{
	return Year;
}
bool Date::inputDate(){
	int day, month, year;
	cout << "Enter Date: ";
	cin >> day;
	cout << "Enter Month: ";
	cin >> month;
	cout << "Enter Year: ";
	cin >> year;
	Day = day;
	Month = month;
	this->Year = year;
	bool validation = validateDate();
	if (validation)
	{
		cout << "Date is in correct format.\n";
		return true;
	}
	else if (!validation)
	{
		Day = 1;
		Month = 1;
		Year = 2000;
		cout << "Date is in incorrect format.\n";
		return false;
	}
}
bool Date::copyDate(Date& ref){
	this->Day = ref.Day;
	this->Month = ref.Month;
	this->Year = ref.Year;
	bool validation = validateDate();
	if (validation)
	{
		cout << "Date is in correct format.\n";
		return true;
	}
	else if (!validation)
	{
		Day = 1;
		Month = 1;
		Year = 2000;
		cout << "Date is in incorrect format.\n";
		return false;
	}
}
bool Date::inputCompleteDate(int dd, int mm, int yyyy){
	Day = dd;
	Month = mm;
	Year = yyyy;
	bool validation = validateDate();
	if (validation)
	{
		cout << "Date is in correct format.\n";
		return true;
	}
	else
	{
		Day = 1;
		Month = 1;
		Year = 2000;
		cout << "Date is in incorrect format values are set to default.\n";
		return false;
	}
}
Date& Date::getDate() const{
	Date obj(Day,Month,Year);
	return obj;
}
void Date::retriveDate(int& dd, int& mm, int& yyyy) const{
	dd = this->Day;
	mm = this->Month;
	yyyy = this->Year;
}
void Date::showDate() const {
	cout << "Date : " << Day << "-" << Month << "-" << Year << endl;
}
bool Date::isEqual(Date& ref) const{
	if ((this->Day == ref.Day) && (this->Month == ref.Month) && (this->Year == ref.Year))
		return true;
	else
		return false;
}
bool Date::isLeapYear() const{
	if (this->Year % 4 == 0) {
		if (this->Year % 100 == 0) {
			if (this->Year % 400 == 0)
				return true;
			else
				return false;
		}
		else
			return true;
	}
	else
		return false;
}
Date::~Date() {
	Day = 0;
	Month = 0;
	Year = 0;
}
bool Date::validateDate() const {
	bool monthVal = false;
	bool dayVal = false;
	if (this->Month >= 1 && this->Month <= 12)
	{
		monthVal = true;
	}
	if (this->Month == 2)
	{
		if (isLeapYear())
		{
			if (this->Day >= 1 && this->Day <= 28)
			{
				dayVal = true;
			}
		}
		else if (!isLeapYear())
		{
			if (this->Day >= 1 && this->Day <= 29)
			{
				dayVal = true;
			}
		}
	}
	else if ((this->Month >= 1 && this->Month == 7) && this->Month != 2)
	{
		if (this->Month % 2 == 1)
		{
			if (this->Day >= 1 && this->Day <= 31)
			{
				dayVal = true;
			}
		}
		else
		{
			if (this->Day >= 1 && this->Day <= 30)
			{
				dayVal = true;
			}
		}
	}
	else if ((this->Month >= 8 && this->Month == 12))
	{
		if (this->Month % 2 == 0)
		{
			if (this->Day >= 1 && this->Day <= 31)
			{
				dayVal = true;
			}
		}
		else
		{
			if (this->Day >= 1 && this->Day <= 31)
			{
				dayVal = true;
			}
		}
	}

	if (monthVal && dayVal)
	{
		return true;
	}
	else
	{
		return false;
	}
}
Date Date::operator=(const Date& ref) {
	Day = ref.Day;
	Month = ref.Month;
	Year = ref.Year;
	return *this;
}