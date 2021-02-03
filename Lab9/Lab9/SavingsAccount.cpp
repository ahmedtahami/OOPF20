#include "SavingsAccount.h"
SavingsAccount::SavingsAccount() {
	IntrestRate = 0;
}
SavingsAccount::SavingsAccount(string title, int accountNumber, double balance, Date dateOfOpening, double intrestRate) : BankAccount(title, accountNumber, balance, dateOfOpening) {
	IntrestRate = intrestRate;
}
SavingsAccount::SavingsAccount(const SavingsAccount& ref) : BankAccount(ref) {
	IntrestRate = ref.IntrestRate;
}
double SavingsAccount::calculateInterest() const {
	return (getBalance() * IntrestRate * 1) / 100; //for one year
}
void SavingsAccount::deposit(double amount) {
	double temp = getBalance() + amount;
	if (temp >= calculateInterest()) {
		BankAccount::deposit(amount - calculateInterest());
	}
	else {
		cout << "Transaction Failed!" << endl;
	}
}
void SavingsAccount::withdraw(double amount) {
	BankAccount::withdraw(amount + calculateInterest());
}
void SavingsAccount::Display() const {
	BankAccount::Display();
	cout << "Intrest : " << calculateInterest();
}
SavingsAccount::~SavingsAccount() {
	IntrestRate = 0;
}