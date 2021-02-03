#pragma once
#include"PowerDevice.h"
#include<iostream>
class Printer : virtual public PowerDevice
{
private:
	int PID;
public:
	Printer(int pid, int pdid);
};

