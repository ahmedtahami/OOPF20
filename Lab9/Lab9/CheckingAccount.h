#pragma once
#include "BankAccount.h"
class CheckingAccount : public BankAccount
{
private:
	double Fee;
public:
	CheckingAccount();
	CheckingAccount(string title, int accountNumber, double balance, Date dateOfOpening, double fee);
	CheckingAccount(const CheckingAccount&);
	void setFee(double);
	double getFee() const;
	void deposit(double);
	void withdraw(double);
	void Display() const;
	~CheckingAccount();
};

