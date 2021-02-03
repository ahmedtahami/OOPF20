#pragma once
class Date
{
public:
	Date();
	Date(int, int, int);
	Date(const Date&);
	bool inputDate();
	bool copyDate(Date&);
	bool inputCompleteDate(int, int, int);
	Date& getDate() const;
	void retriveDate(int&, int&, int&) const;
	void showDate() const;
	bool isEqual(Date&) const;
	bool isLeapYear() const;
	void setDay(int);
	void setMonth(int);
	void setYear(int);
	int getDay() const;
	int getMonth() const;
	int getYear() const;
	Date operator=(const Date&);
	~Date();
private:
	bool validateDate() const;
	int Month;
	int Year;
	int Day;
};

