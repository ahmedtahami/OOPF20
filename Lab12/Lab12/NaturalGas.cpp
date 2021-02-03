#include "NaturalGas.h"
NaturalGas::NaturalGas(double avgBill) {
	AvgBillPerMonth = avgBill;
}
void NaturalGas::setAvgBill(double avgBill) {
	AvgBillPerMonth = avgBill;
}
double NaturalGas::getCarbonFootprint() {
	return (AvgBillPerMonth / PricePerCubicFt) * NaturalGasEmissioFactor * 12;
}