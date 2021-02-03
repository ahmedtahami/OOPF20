#include<iostream>
#include"BankAccount.h"
#include"Savings.h"
#include"Checking.h"
#include"Current.h"
#include"Investment.h"
using namespace std;
int main()
{
	
	char* Name = new char[12]{ "Muhammad Ali" };
	char* AC = new char[17]{ "56897461214121" };	
	Current c(Name,AC,2500,100,25);
	c.Withdraw(200);
	c.Display();
	return 0;
}
