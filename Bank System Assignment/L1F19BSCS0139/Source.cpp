#include<iostream>
#include"BankAccount.h"
#include"Savings.h"
#include"Checking.h"
#include"Current.h"
#include"Branch.h"
#include"Investment.h"
using namespace std;
int main()
{
	
	char* x = new char[12]{ "Ahmed Naeem" };
	char* y = new char[17]{ "123456782345678" };
	Checking* ac;
	Current c(x,y,1000,50,5);
	ac = &c;
	ac->Withdraw(945);
	c.Display();
	Branch b;
	b.AddNewAccount(c);
	return 0;
}