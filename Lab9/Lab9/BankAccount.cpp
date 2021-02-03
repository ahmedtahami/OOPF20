#include "BankAccount.h"
BankAccount::BankAccount() {
	Title = "\0";
	AccountNumber = 0;
	Balance = 0;
}
BankAccount::BankAccount(const BankAccount& ref) {
	Title = ref.Title;
	AccountNumber = ref.AccountNumber;
	Balance = ref.Balance;
	DateOfOpening = ref.DateOfOpening;
}
BankAccount::BankAccount(string title, int accountNumber, double balance, Date dateOfOpening) {
	Title = title;
	AccountNumber = accountNumber;
	Balance = balance;
	DateOfOpening = dateOfOpening;
}
void BankAccount::setTitle(string title) {
	Title = title;
}
void BankAccount::setAccountNumber(int accountNumber) {
	AccountNumber = accountNumber;
}
void BankAccount::setBalance(double balance) {
	Balance = balance;
}
void BankAccount::setDate(const Date& date) {
	DateOfOpening = date;
}
string BankAccount::getTitle() const {
	string temp = Title;
	return temp;
}
int BankAccount::getAccountNumber() const {
	int temp = AccountNumber;
	return temp;
}
double BankAccount::getBalance() const {
	double temp = Balance;
	return temp;
}
string BankAccount::getDate() const {
	return DateOfOpening.toString();
}
void BankAccount::deposit(double amount) {
	Balance = Balance + amount;
}
void BankAccount::withdraw(double amount) {
	if (amount <= Balance)
	{
		Balance = Balance - amount;
		cout << "Transaction Successful!\n";
	}
	else
	{
		cout << "Transaction Failed!\n";
	}
}
int BankAccount::getYear() const {
	return DateOfOpening.getYear();
}
void BankAccount::Display() const {
	cout << "Account Title : " << getTitle() << endl;
	cout << "Account Number : " << getAccountNumber() << endl;
	cout << "Balance : " << getBalance() << endl;
	cout << "Date of Opening : " << getDate() << endl;
}
BankAccount::~BankAccount() {
	Title = "\0";
	AccountNumber = 0;
	Balance = 0;
}