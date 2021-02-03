#include <string>
#include "Date.h"
using namespace std;
#pragma once
class BankAccount
{
private:
	string Title;
	int AccountNumber;
	double Balance;
	Date DateOfOpening;
public:
	BankAccount();
	BankAccount(const BankAccount&);
	BankAccount(string title, int accountNumber, double balance, Date dateOfOpening);
	void setTitle(string);
	void setAccountNumber(int);
	void setBalance(double);
	void setDate(const Date&);
	string getTitle() const;
	int getAccountNumber() const;
	double getBalance() const;
	string getDate() const;
	void deposit(double);
	void withdraw(double);
	void Display() const;
	int getYear() const;
	~BankAccount();
};

