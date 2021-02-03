#pragma once
#include<iostream>
using namespace std;
class Date
{
private:
	int Month;
	int Year;
	int Day;
	bool validateDate() const {
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
public:
	Date() {
		Day = 1;
		Month = 1;
		Year = 2000;
	}
	Date(int dd, int mm, int yyyy) {
		Day = dd;
		Month = mm;
		Year = yyyy;
		bool validation = validateDate();
		if (!validation)
		{
			Day = 1;
			Month = 1;
			Year = 2000;
			cout << "Date is in incorrect format values are set to default.\n";
			exit(-1);
		}
	}
	Date(const Date& ref) {
		Day = ref.Day;
		Month = ref.Month;
		Year = ref.Year;
	}
	void setDay(int dd) {
		if (dd >= 1 && dd <= 31)
			Day = dd;
		else
			cout << "Invalid Input!\n";
	}
	void setMonth(int mm) {
		if (mm >= 1 && mm <= 12)
			Month = mm;
		else
			cout << "Invalid Input!\n";
	}
	void setYear(int yyyy) {
		if (yyyy >= 2000)
			Year = yyyy;
		else
			cout << "Invalid Input!\n";
	}
	int getDay() const {
		return Day;
	}
	int getMonth() const {
		return Month;
	}
	int getYear() const {
		return Year;
	}
	void inputDate() {
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
		if (!validation)
		{
			Day = 1;
			Month = 1;
			Year = 2000;
			cout << "Date is in incorrect format values are set to default.\n";
			exit(-1);
		}
	}
	void copyDate(Date& ref) {
		this->Day = ref.Day;
		this->Month = ref.Month;
		this->Year = ref.Year;
		bool validation = validateDate();
		if (!validation)
		{
			Day = 1;
			Month = 1;
			Year = 2000;
			cout << "Date is in incorrect format values are set to default.\n";
			exit(-1);
		}
	}
	void inputCompleteDate(int dd, int mm, int yyyy) {
		Day = dd;
		Month = mm;
		Year = yyyy;
		bool validation = validateDate();
		if (!validation)
		{
			Day = 1;
			Month = 1;
			Year = 2000;
			cout << "Date is in incorrect format values are set to default.\n";
			exit(-1);
		}
	}
	Date& getDate() const {
		Date obj(Day, Month, Year);
		return obj;
	}
	string toString() const
	{
		return to_string(Day) + "-" + to_string(Month) + "-" + to_string(Year);
	}
	void retriveDate(int& dd, int& mm, int& yyyy) const {
		dd = this->Day;
		mm = this->Month;
		yyyy = this->Year;
	}
	void showDate() const {
		cout << Day << "-" << Month << "-" << Year << endl;
	}
	bool isEqual(Date& ref) const {
		if ((this->Day == ref.Day) && (this->Month == ref.Month) && (this->Year == ref.Year))
			return true;
		else
			return false;
	}
	bool isLeapYear() const {
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
	Date operator=(const Date& ref) {
		Day = ref.Day;
		Month = ref.Month;
		Year = ref.Year;
		return *this;
	}
	~Date() {
		Day = 0;
		Month = 0;
		Year = 0;
	}
};

