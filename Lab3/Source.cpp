#include<iostream>
#include "Rectangle.h"
#include "swimmingPool.h"
#include "DayType.h"
using namespace std;
int main()
{
	swimmingPool pool;
	pool.setLength(1);
	pool.setWidth(2);
	pool.setDepth(3);
	pool.setFillingRate(2); //gallon per minute
	pool.setDrainingRate(1); //gallon per minute
	cout << "Filling Rate : " << pool.getEmptyPoolFillTime() << " minute(s)" << endl;
	cout << "Dranning Rate : " << pool.getEmptyPoolDrainTime() << " minute(s)" << endl;
	return 0;
}