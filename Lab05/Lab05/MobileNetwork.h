#pragma once
#include <string>
class MobileNetwork
{
private:
	std::string Name;
	std::string MobileNumber;
	const char* PackageTypes[3] = { "Daily","Monthly","Weekly" };
	int Package;
	double Balance;
	double CallRate;
public:
	MobileNetwork();
	MobileNetwork(std::string, std::string,int,double,double);
	void setName(std::string);
	void setNumber(std::string);
	void setPackage(int);
	void setBalance(double);
	void setCallRate(double);
	std::string getName() const;
	std::string getNumber() const;
	const char* getPackage() const;
	double getCallRate() const;
	double CheckBalance() const;
	void Recharge(double);
	void Discharge(double);
	void CallCharges(double) const;
};

