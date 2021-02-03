#include<iostream>
#include "Person.h"
#include "Employee.h"
#include "BankAccount.h"
#include "BaseballPlayer.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
using namespace std;
int main()
{
	char* name = new char[12]{ "Ahmed Naeem" };
	Date d(17, 12, 2020);
	
	/*Employee e(1, name, 20, 50000);
	e.Display();

	BaseballPlayer p(name, 52, 562, 45.55);
	p.Display();*/

	/*BankAccount b;
	b.setBalance(1500);
	b.withdraw(100);
	b.Display();

	CheckingAccount c(name, 784512, 1000, d, 50);
	c.withdraw(950);
	c.Display();*/

	/*SavingsAccount s(name, 784512, 1000, d, 1);
	s.withdraw(990);
	s.Display();*/
	SavingsAccount s("a", 4, 5, d, 1);
	return 0;
}