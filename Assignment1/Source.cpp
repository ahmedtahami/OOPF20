#include<iostream>
#include "Pizza.h"
#include "Bank.h"
#include "LeCream.h"
using namespace std;
void Display(Pizza pizza, int i)
{
	if (!(i == 0))
	{
		cout << endl;
	}
	cout << "Pizza: " << i + 1 << endl;
	cout << "Pizza Topping is: " << pizza.getTopping() << " " << endl;
	cout << "Pizza Size is: " << pizza.getSize() << " Inches." << endl;
	cout << "Pizza Thickness is: " << pizza.getThickness() << " Centimeter." << endl;
	cout << "Pizza Price is: " << pizza.getPrice() << " PKR" << endl;
}
void Display(Bank account)
{
	cout << "Your Account Title is: " << account.getTitle() << endl;
	cout << "Your Account Number is: " << account.getAccountNumber() << endl;
	cout << "Your Account Type is: " << account.getAccountType() << endl;
	cout << "Your Account Balance is: " << account.getBalance() << endl;
}
int main()
{

#pragma region Question 2
	/*char pizzaToppings[5][16] = { "Chicken Supreme", "BBQ", "Bufflo Ranch", "Fajita", "Tikka" };
	double size[5] = { 7,10,12,15,18 };
	double price[5] = { 700,1000,1200,1500,1800 };
	double thickness[5] = { 5, 7, 9, 11 ,13 };
	Pizza pizzas[5];
	for (int i = 0; i < 5; i++)
	{
		pizzas[i].setPrice(price[i]);
		pizzas[i].setSize(size[i]);
		pizzas[i].setThickness(thickness[i]);
		pizzas[i].setTopping(pizzaToppings[i]);
		Display(pizzas[i], i);
	}*/
#pragma endregion

#pragma region Question 3
	/*char* accountTitle = new char[12]{ "Ahmed Naeem" };
	char* accountType = new char[8]{ "Current" };
	Bank account(accountTitle, 12345678, accountType, 45000);
	Display(account);
	account.Withdraw(1500);
	account.Deposit(500);
	account.Withdraw(50000);*/

#pragma endregion

#pragma region Question 4
	LeCream iceCream;
#pragma endregion




	return 0;
}