#pragma once
class Bank
{
private:
	char* Name;
	char* AccountNumber;
	const char* AccountTypes[2] = { "Savings" , "Current" };
	int AccountType;
	double Balance;
public:
	Bank();
	Bank(char*,char*,int,double);
	Bank(Bank&);
	~Bank();
	void setName(char*);
	void setaccountNumber(char*);
	void setAccountType(int);
	void setBalance(double);
	char* getName() const;
	char* getaccountNumber() const;
	const char* getAccountType() const;
	double getBalance() const;
	void changeAccountType(int);
	void Deposit(double);
	void WithDraw(double);
	void SaveData();
};

