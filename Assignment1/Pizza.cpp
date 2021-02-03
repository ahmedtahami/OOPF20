#include "Pizza.h"

Pizza::Pizza()
{
	Size = 0;
	Topping = nullptr;
	Price = 0;
	Thickness = 0;
}
void Pizza::setSize(double size)
{
	Size = size;
}
double Pizza::getSize()
{
	return Size;
}
void Pizza::setTopping(char* topping)
{
	Topping = topping;
}
char* Pizza::getTopping()
{
	return Topping;
}
void Pizza::setPrice(double price)
{
	Price = price;
}
double Pizza::getPrice()
{
	return Price;
}
void Pizza::setThickness(double thickness)
{
	Thickness = thickness;
}
double Pizza::getThickness()
{
	return Thickness;
}