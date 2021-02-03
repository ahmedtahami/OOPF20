#pragma once
#include "BankAccount.h"
class SavingsAccount : public BankAccount
{
private:
	double IntrestRate;
public:
	SavingsAccount();
	SavingsAccount(string title, int accountNumber, double balance, Date dateOfOpening, double intrestRate);
	SavingsAccount(const SavingsAccount&);
	double calculateInterest() const;
	void deposit(double);
	void withdraw(double);
	void Display() const;
	~SavingsAccount();
};

