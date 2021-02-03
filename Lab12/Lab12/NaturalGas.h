#pragma once
#include"CarbonFootprint.h"
class NaturalGas : public CarbonFootprint
{
private:
	double AvgBillPerMonth;
	const double PricePerCubicFt = 3;
	const double NaturalGasEmissioFactor = 120.61;
public:
	NaturalGas(double avgBill = 0);
	void setAvgBill(double avgBill);
	double getCarbonFootprint();
};

