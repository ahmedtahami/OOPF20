#pragma once
class Account
{
private:
	char* AccountNo;
	char* AccountType;
	double Balance;
public:
	Account();
	Account(const Account&);
	Account(char* accountNo, char* accountype, double balance);
	void setAccountNo(char*);
	void setAccountType(char*);
	void setBalance(double);
	char* getAccountNo();
	char* getAccountType();
	double getBalance();
	void Display();
	void operator+(double);
	void operator-(double);
	char* cpyDeep(char*);
	~Account();
};

