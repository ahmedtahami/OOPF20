#pragma once
class Time
{
private:
	int Hours;
	int Minutes;
	int Seconds;
	bool validateTime();
	const char* attr[2] = { "AM","PM" };
	const char* am_pm;
	bool twentyFourHoursFormat;
public:
	Time();
	Time(int hh, int mm, int ss, bool twentyFourHoursFormat, bool AM, bool PM);
	Time(const Time&);
	bool copyTime(Time&);
	bool inputCompleteTime(int hh, int mm, int ss, bool twentyFourHoursFormat, bool AM, bool PM);
	Time& getTime() const;
	void retriveTime(int&, int&, int&) const;
	void showTime() const;
	bool isEqual(Time&) const;
	void setHours(int,bool);
	void setMinutes(int);
	void setSeconds(int);
	void setFormat(bool,bool,bool);
	int getHours() const;
	int getMinutes() const;
	int getSeconds() const;
	void Converto24();
	void Converto12();
	~Time();
};

