#pragma once
#include "Person.h"
#include "Account.h"
class Client : public Person
{
private:
	char* Employement;
	Account account;
public:
	Client();
	Client(const Client&);
	Client(char* name, char* address, char* phoneNumber, char* titile, Account account);
	void UpdateAccountInfo(char* accountNo, char* accountype, double balance);
	void setEmployeementTitle(char*);
	void Withdraw(double);
	void Deposit(double);
	void Display();
	char* cpyDeep(char*);
	~Client();
};

