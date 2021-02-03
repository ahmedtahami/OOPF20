#pragma once
class Bank
{
private:
	char* AccountTitle;
	long int AccountNumber;
	char* AccountType;
	long double Balance;
public:
	Bank(char*,long int,char*,long double); //Used to set all the private memebers on Class Instance Creation.
	Bank(char*); //Used to set Account Title on Class Instance Creation.
	void setTitle(char*); //used to set Account Title
	void setAccountNumber(long int); //used to set Account Number
	void setAccountType(char*); //used to set Account Type
	void setBalance(long double); //used to set Account Balance
	char* getTitle(); //used to get/view Account Title
	long int getAccountNumber(); //used to get/view Account Account Number
	char* getAccountType(); //used to get/view Account Type
	long double getBalance(); //used to check Account Balance
	void Withdraw(long double);
	void Deposit(long double);
};

