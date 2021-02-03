#pragma once
#include"PowerDevice.h"
#include<iostream>
class Scanner : virtual public PowerDevice
{
private:
	int SID;
public:
	Scanner(int sid, int pdid);
};

