#pragma once
#include"BankAccount.h"
#include"Checking.h"
#include"Investment.h"
#include"Savings.h"
#include"Current.h"
class Branch
{
private:
	BankAccount* Accounts;
	static int Count;
	static double TotalBalance;
public:
	Branch() {
		Accounts = nullptr;
		Count = 0;
		TotalBalance = 0;
	}
	void AddNewAccount(BankAccount& b) {
		bool result = validateAccountNumber(b.getAcountNumber());
		if (result)
			cout << "Account Already Exists!";
			exit(-1);
		int newSize = Count + 1;
		BankAccount* temp = new BankAccount[newSize];
		for (int i = 0; i < newSize; i++)
		{
			*(temp + i) = *(Accounts + i);
		}
		temp[newSize - 1] = b;
		delete[] Accounts;
		Accounts = nullptr;
		Count = newSize;
		Accounts = new BankAccount[Count];
		for (int i = 0; i < Count; i++)
		{
			*(Accounts + i) = *(temp + i);
		}
	}
	void UpdateAccount(const char* title, BankAccount& updated) {
		for (int i = 0; i < Count; i++)
		{
			if (strcmp(Accounts[i].getTitle(),title))
			{
				Accounts[i] = updated;
				cout << "Account Details Updated!";
			}
			else
			{
				cout << "Account Not Found!";
				exit(-1);
			}
		}
	}
	BankAccount& GetAccount(char* accountNumber) {
		for (int i = 0; i < Count; i++)
		{
			if (strcmp(Accounts[i].getTitle(), accountNumber))
			{
				return Accounts[i];
			}
			else
			{
				cout << "Account Not Found!";
				exit(-1);
			}	
		}
	}
	void GetAccounts(char* title) {
		bool flag = false;
		for (int i = 0; i < Count; i++)
			if (strcmp(Accounts[i].getTitle(), title))
				Accounts[i].Display();
				flag = true;
		if (!flag)
			cout << "No Results Found!";
	}
	void Display() {
		bool flag = false;
		for (int i = 0; i < Count; i++)
			Accounts[i].Display();
			flag = true;
		if (!flag)
			cout << "No Results Found!";
	}
	bool validateAccountNumber(char* accountNumber) {
		bool flag = false;
		for (int i = 0; i < Count; i++)
		{
			if (strcmp(Accounts[i].getTitle(), accountNumber))
			{
				flag = true;
			}
			else
			{
				flag = false;
			}
		}
		return flag;
	}
	BankAccount& operator [](int index) {
		if (index >= Count) {
			cout << "Array index out of bound!";
			exit(0);
		}
		return Accounts[index];
	}
};

