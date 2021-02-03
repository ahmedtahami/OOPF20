#include "Electrcity.h"
Electrcity::Electrcity(double avgBill) : CarbonFootprint() {
	AvgBillPerMonth = avgBill;
}
double Electrcity::getCarbonFootprint(){
	return (AvgBillPerMonth / PricePerKwh) * ElectricityEmissioFactor * 12;
}
void Electrcity::setAvgBill(double avgBill) {
	AvgBillPerMonth = avgBill;
}