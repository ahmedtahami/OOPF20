#include "Client.h"
#include<iostream>
#include<string>
using namespace std;
Client::Client() : Person(){
	Employement = nullptr;
	Account account{};
}
Client::Client(const Client& ref) : Person(ref) {
	account = ref.account;
	Employement = cpyDeep(ref.Employement);
}
Client::Client(char* name, char* address, char* phoneNumber, char* titile, Account account) : Person(name, address, phoneNumber) {
	Employement = cpyDeep(titile);
	account = account;
}
void Client::UpdateAccountInfo(char* accountNo, char* accountype, double balance) {
	account.setAccountNo(accountNo);
	account.setAccountType(accountype);
	account.setBalance(balance);
}
void Client::setEmployeementTitle(char* title) {
	Employement = cpyDeep(title);
}
void Client::Withdraw(double amount) {
	account - amount;	
}
void Client::Deposit(double amount) {
	account + amount;
}
void Client::Display() {
	Person::Display();
	cout << "Title : " << Employement << endl;
	account.Display();
}
char* Client::cpyDeep(char* arr) {
	int size = strlen(arr) + 1;
	char* temp = new char[size];
	for (int i = 0; i < size; i++)
	{
		*(temp + i) = *(arr + i);
	}
	*(temp + (size - 1)) = '\0';
	return temp;
}
Client::~Client() {
	if (Employement)
	{
		delete[] Employement;
		Employement = nullptr;
	}
}