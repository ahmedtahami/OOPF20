#pragma once
#include "Person.h"
class BaseballPlayer : public Person
{
private:
	int totalRuns;
	double battingAverage;
public:
	BaseballPlayer();
	BaseballPlayer(const BaseballPlayer&);
	BaseballPlayer( const char* name, int age, const int totalRuns, double battingAverage);
	void setbattingAverage(double);
	void settotalRuns(int);
	int gettotalRuns();
	double getbattingAverage();
	void Display();
	~BaseballPlayer();
};

