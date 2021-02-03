#pragma once
#include<iostream>
#include<string>
using namespace std;
class BankAccount
{
private:
	char* Title;
	char* AccountNumber;
	double AccountBalance;
public:
	BankAccount() {
		Title = nullptr;
		AccountNumber = nullptr;
		AccountBalance = 0;
	}
	BankAccount(char* title, char* accountNumber, double accountBalance) {
		if (isValid(accountNumber))
		{
			AccountNumber = strcopy(accountNumber);
		}
		else
		{
			cout << "Parameter Error!\n";
			exit(-1);
		}
		Title = strcopy(title);
		AccountBalance = accountBalance;
	}
	BankAccount(const BankAccount& ref) {
		Title = strcopy(ref.Title);		
		AccountNumber = strcopy(ref.AccountNumber);
		AccountBalance = ref.AccountBalance;
	}
	void setTitle(char* arr) {
		Title = strcopy(arr);
	}
	char* getTitle() 
	{
		char* temp = strcopy(Title);
		return temp;
	}
	void setAcountNumber(char* accountNumber) {
		if (isValid(accountNumber))
		{
			AccountNumber = strcopy(accountNumber);
		}
		else
		{
			cout << "Parameter Error!\n";
			exit(-1);
		}
	}
	char* getAcountNumber()
	{
		char* temp = strcopy(AccountNumber);
		return temp;
	}
	void setAcountBalance(double balance) {
		AccountBalance = balance;
	}
	double getAcountBalance() const
	{
		return AccountBalance;
	}
	virtual void Deposit(double amount) {};
	virtual void Withdraw(double amount) {};
	void Display() const {
		cout << "<" << Title << ";" << AccountNumber << ";" << AccountBalance << ">\n";
	}
	char* strcopy(char* arr)
	{
		int size = strlen(arr) + 1;
		char* temp = new char[size];
		for (int i = 0; i < size; i++)
		{
			*(temp + i) = *(arr + i);
		}
		return temp;
	}
	bool operator ==(const BankAccount& obj) {
		bool flag = false;
		if ((obj.Title == Title) && (obj.AccountNumber == AccountNumber) && (obj.AccountBalance == obj.AccountBalance))
			flag = true;
		return flag;
	}
	bool operator !=(const BankAccount& obj) {
		bool flag = false;
		if ((obj.Title != Title) && (obj.AccountNumber != AccountNumber) && (obj.AccountBalance != obj.AccountBalance))
			flag = true;
		return flag;
	}
	void operator =(const BankAccount& obj) {
		setAcountBalance(obj.AccountBalance);
		setAcountNumber(obj.AccountNumber);
		setTitle(obj.Title);
	}
	bool isValid(char* arr) {
		bool flag = false;
		int count = 0;
		for (int i = 0; i < strlen(arr); i++)
		{
			if (*(arr + i) >= 48 && *(arr + i) <= 57)
			{
				flag = true;
			}
			else
			{
				flag = false;
			}
			count++;
		}
		if (count == 16 && flag == true)
		{
			return flag;
		}
		else
		{
			flag = false;
		}
		return flag;
	}
	
	~BankAccount() {
		delete[] Title;
		delete[] AccountNumber;
		AccountBalance = 0;
	}
};
