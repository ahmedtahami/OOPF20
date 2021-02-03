#include "Account.h"
#include <string>
#include <iostream>
using namespace std;
Account::Account() {
	AccountNo = nullptr;
	AccountType = nullptr;
	Balance = 0;
}
Account::Account(const Account& ref) {
	AccountNo = cpyDeep(ref.AccountNo);
	AccountType = cpyDeep(ref.AccountType);
	Balance = ref.Balance;
}
Account::Account(char* accountNo, char* accountType, double balance) {
	AccountNo = cpyDeep(accountNo);
	AccountType = cpyDeep(accountType);
	Balance = balance;
}
void Account::setAccountNo(char* accountNo) {
	AccountNo = cpyDeep(accountNo);
}
void Account::setAccountType(char* accountType) {
	AccountType = cpyDeep(accountType);
}
void Account::setBalance(double balance) {
	Balance = balance;
}
char* Account::getAccountNo() {
	char* temp = new char[strlen(AccountNo)];
	temp = cpyDeep(AccountNo);
	return temp;
}
char* Account::getAccountType() {
	char* temp = new char[strlen(AccountType)];
	temp = cpyDeep(AccountType);
	return temp;
}
double Account::getBalance() {
	double temp = Balance;
	return Balance;
}
void Account::Display() {
	cout << "Account Number : " << getAccountNo() << endl;
	cout << "Account Type : " << getAccountType() << endl;
	cout << "Account Balance : " << getBalance() << endl;
}
char* Account::cpyDeep(char* arr) {
	int size = strlen(arr) + 1;
	char* temp = new char[size];
	for (int i = 0; i < size; i++)
	{
		*(temp + i) = *(arr + i);
	}
	*(temp + (size - 1)) = '\0';
	return temp;
}
void Account::operator+(double amount) {
	Balance = Balance + amount;
}
void Account::operator-(double amount) {
	if (this->getBalance() >= amount)
	{
		cout << "Not Enough Balance!";
		exit(-1);
	}
	Balance = Balance - amount;
}
Account::~Account() {
	if (AccountNo)
	{
		delete[] AccountNo;
		AccountNo = nullptr;
	}
	if (AccountType)
	{
		delete[] AccountType;
		AccountType = nullptr;
	}
	Balance = 0;
}