#pragma once
#include <string>
class LeCream
{
private:
	const char *Flavors[7] = { "Chocolate", "Vanilla", "Strawberry", "Mango", "Tutti Fruiti", "Almond Crunch" , "Coffee" };
	std::string Flavor;
	int Scoops;
	double Price;
	bool VanilaWafer;
public:
	LeCream();
	void setFlavor(int);
	std::string getFlavor();
	void setScoops(int);
	int getScoops();
	void setPrice();
	double getPrice();
	void AddWafer(bool);
	void DisplayOrder();
	std::string WaferRequired();

};

