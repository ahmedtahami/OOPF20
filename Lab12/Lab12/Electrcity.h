#pragma once
#include"CarbonFootprint.h"
class Electrcity : public CarbonFootprint
{
private:
	double AvgBillPerMonth;
	const double PricePerKwh = 8;
	const double ElectricityEmissioFactor = 1.37;
public:
	Electrcity(double avgBill = 0);
	void setAvgBill(double avgBill);
	double getCarbonFootprint();
};

