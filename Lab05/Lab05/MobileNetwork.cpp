#include "MobileNetwork.h"
#include<iostream>
#include<string>
using namespace std;
MobileNetwork::MobileNetwork() {
	Name = "\0";
	MobileNumber = "\0";
	Balance = 0;
	CallRate = 0;
}
MobileNetwork::MobileNetwork(string name, string mobileNum, int package, double balance, double callRate) {
	Name = name;
	MobileNumber = mobileNum;
	Package = package;
	Balance = balance;
	CallRate = callRate;
}
void MobileNetwork::setName(string name) {
	Name = name;
}
void MobileNetwork::setNumber(std::string number) {
	MobileNumber = number;
}
void MobileNetwork::setPackage(int package) {
	if (package > 0 && package <= 3)
		Package = package - 1;
	else
		cout << "Invalid Input\n";
		exit(-1);	
}
void MobileNetwork::setBalance(double balance) {
	Balance = balance;
}
void MobileNetwork::setCallRate(double callRate) {
	CallRate = callRate;
}
string MobileNetwork::getName() const{
	return Name;
}
std::string MobileNetwork::getNumber() const {
	return MobileNumber;
}
double MobileNetwork::getCallRate() const {
	return CallRate;
}
const char* MobileNetwork::getPackage() const {
	return PackageTypes[Package];
}
double MobileNetwork::CheckBalance() const {
	return Balance;
}
void MobileNetwork::Recharge(double amount) {
	Balance = Balance + amount;
}
void MobileNetwork::Discharge(double amount) {
	Balance = Balance - amount;
}
void MobileNetwork::CallCharges(double timeInMinutes) const {
	double charges = CallRate * timeInMinutes;
	cout << "\nYour have been charged " << charges << " Rupees for " << timeInMinutes << " Minute(s).\n";
}