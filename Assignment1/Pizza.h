#pragma once
class Pizza
{
private:
	double Size; //inches
	char* Topping;
	double Price; 
	double Thickness; //cm
public:
	Pizza();
	void setSize(double);
	double getSize();
	void setTopping(char*);
	char* getTopping();
	void setPrice(double);
	double getPrice();
	void setThickness(double);
	double getThickness();
};

