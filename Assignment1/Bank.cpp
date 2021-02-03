#include "Bank.h"
#include <iostream>

Bank::Bank(char* _accountTitle = nullptr, long int _accountNumber = 0, char* _accountType = nullptr, long double _balance = 0)
{
	AccountTitle = _accountTitle;
	AccountNumber = _accountNumber;
	AccountType = _accountType;
	Balance = _balance;
}
void Bank::setTitle(char* _accountTitle)
{
	AccountTitle = _accountTitle;
}
void Bank::setAccountNumber(long int _accountNumber)
{
	AccountNumber = _accountNumber;
}
void Bank::setAccountType(char* _accountType)
{
	AccountType = _accountType;
}
void Bank::setBalance(long double _balance)
{
	Balance = _balance;
}
char* Bank::getTitle()
{
	return AccountTitle;
}
long int Bank::getAccountNumber()
{
	return AccountNumber;
}
char* Bank::getAccountType()
{
	return AccountType;
}
long double Bank::getBalance()
{
	return Balance;
}
void Bank::Withdraw(long double withdrawAmmount)
{
	if (withdrawAmmount <= Balance)
	{
		Balance = Balance - withdrawAmmount;
		std::cout << "You have withdrawn " << withdrawAmmount << " Rupees. Your new balance is " << Balance << " Rupees.\n";
	}
	else
	{
		std::cout << "Withdraw ammount excceded. Your current Balance is " << Balance << " Rupees.\n";
	}
	std::cout << "Thanks for Banking with us!" << std::endl;
}
void Bank::Deposit(long double depositAmmount)
{
	Balance = Balance + depositAmmount;
	std::cout << "You have deposited " << depositAmmount << " Rupees. Your new balance is " << Balance << " Rupees.\n";
	std::cout << "Thanks for Banking with us!\n";
}