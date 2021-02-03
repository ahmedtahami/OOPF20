#include "LeCream.h"
#include <iostream>
LeCream::LeCream() {
	int flavor = 0;
	int scoops = 2;
	double price = 0;
	char addWafer = '\0';
	std::cout << "We have following flavors. Select Yours!\n";
	for (int i = 0; i < 7; i++)
	{
		std::cout << i + 1 << "- " << Flavors[i] << std::endl;
	}
	std::cout << "Note! We serve ice creams with minimum two scoops and not more than three\n";
	std::cout << "Enter Flavor : ";
	std::cin >> flavor;
	setFlavor(flavor - 1);
	std::cout << "Do You Want to add Wafer (Y/N) : ";
	std::cin >> addWafer;
	if (addWafer == 'Y' || addWafer == 'y')
		VanilaWafer = true;
	else
		VanilaWafer = false;		
	std::cout << "Enter Number of Scoops : ";
	std::cin >> scoops;
	setScoops(scoops);
	setPrice();
	DisplayOrder();
}
void LeCream::setFlavor(int flavor) {
	if(flavor >= 0 && flavor < 8)
		Flavor = Flavors[flavor];
	else
		std::cout << "Invalid Input!\n";
		exit(1);
}
std::string LeCream::getFlavor() {
	return Flavor;
}
void LeCream::setScoops(int scoops = 2) {
	if (scoops >= 2 && scoops <= 3)
		Scoops = scoops;
	else
		std::cout << "Invalid Input!\n";
		exit(1);
}
int LeCream::getScoops() {
	return Scoops;
}
void LeCream::setPrice() {
	double price = 0;
	if (getScoops() == 2)
		if (getFlavor() == "Chocolate")
			price = 120;
		else
			price = 100;
	else if (getScoops() == 3)
		if (getFlavor() == "Chocolate")
			price = 180;
		else
			price = 150;
	if (VanilaWafer) price = price + 10;
	Price = price;
}
double LeCream::getPrice() {
	return Price;
}
void LeCream::AddWafer(bool addWafer)
{
	VanilaWafer = addWafer;
	if (VanilaWafer) Price = Price + 10;
}
std::string LeCream::WaferRequired()
{
	std::string temp = "NO";
	if (VanilaWafer) temp = "Yes";
	return temp;
}
void LeCream::DisplayOrder() {
	std::cout << "Your Order is as following.\n";
	std::cout << "Flavor - " << getFlavor() << std::endl;
	std::cout << "Scoops - " << getScoops() << std::endl;
	std::cout << "Wafer Required - " << WaferRequired() << std::endl;
	std::cout << "Price - " << getPrice() << std::endl;
	std::cout << "Thank You!";
	

}