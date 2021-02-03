#include "Bank.h"
#include<iostream>
#include<fstream>
using namespace std;
Bank::Bank() {
	Name = nullptr;
	AccountNumber = nullptr;
	AccountType = 0;
	Balance = 0.0;
}
Bank::Bank(char* name = nullptr, char* accountNumber = nullptr, int type = 0, double balance = 0) {
	if (type >= 0 && type <= 1)
		AccountType = type;
	else
		cout << "Invalid Input";
		exit(-1);
	Name = name;
	AccountNumber = accountNumber;
	Balance = balance;
}
Bank::Bank(Bank& ref)
{
	Name = ref.Name;
	AccountNumber = ref.AccountNumber;
	AccountType = ref.AccountType;
	Balance = ref.Balance;
}
void Bank::setName(char* name) {
	Name = name;
}
void Bank::setaccountNumber(char* accountNumber) {
	AccountNumber = accountNumber;
}
void Bank::setAccountType(int type) {
	if (type >= 0 && type <= 1)
		AccountType = type;
	else
		cout << "Invalid Input";
		exit(-1);
}
void Bank::setBalance(double balance) {
	Balance = balance;
}
char* Bank::getName() const {
	return Name;
}
char* Bank::getaccountNumber() const {
	return AccountNumber;
}
const char* Bank::getAccountType() const {
	const char* type = AccountTypes[AccountType];
	return type;
}
double Bank::getBalance() const {
	return Balance;
}
void Bank::changeAccountType(int type) {
	if (type >= 0 && type <= 1)
		AccountType = type;
	else
		cout << "Invalid Input";
	exit(-1);
}
void Bank::Deposit(double amount) {
	Balance = Balance + amount;
}
void Bank::WithDraw(double amount) {
	Balance = Balance - amount;
}
void Bank::SaveData()
{
	ofstream write;
	write.open("Info.txt");
	write << Name << " " <<  AccountNumber << " " << AccountTypes[AccountType] << " " << Balance << endl;
	write.close();
}
Bank::~Bank()
{
	delete[] Name;
	delete[] AccountNumber;
}