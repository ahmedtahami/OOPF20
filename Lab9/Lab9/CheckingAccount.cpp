#include "CheckingAccount.h"
CheckingAccount::CheckingAccount() : BankAccount() {
	Fee = 0;
}
CheckingAccount::CheckingAccount(string title, int accountNumber, double balance, Date dateOfOpening, double fee) : BankAccount(title, accountNumber, balance, dateOfOpening) {
	Fee = fee;
}
CheckingAccount::CheckingAccount(const CheckingAccount& ref) : BankAccount(ref) {
	Fee = ref.Fee;
}
void CheckingAccount::setFee(double fee) {
	Fee = fee;
}
double CheckingAccount::getFee() const {
	double temp = Fee;
	return temp;
}
void CheckingAccount::deposit(double amount) {
	double temp = getBalance() + amount;
	if (temp >= Fee)
		BankAccount::deposit(amount - Fee);
	else
		cout << "Transaction Failed!" << endl;
}
void CheckingAccount::withdraw(double amount) {
	BankAccount::withdraw(amount + Fee);
}
void CheckingAccount::Display() const {
	BankAccount::Display();
	cout << "Fee : " << Fee << endl;
}
CheckingAccount::~CheckingAccount() {
	Fee = 0;
}