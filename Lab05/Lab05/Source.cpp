#include<iostream>
#include<fstream>
#include "MyString.h"
#include "MobileNetwork.h"
#include "Bank.h"
using namespace std;
int main()
{
	char* temp = new char[12]{ "Ahmed Naeem" };
	/*MyString str;
	str.setMyArray(temp);
	str.print();

	MobileNetwork Jazz("Ahmed Naeem", "03231610647", 1, 300, 1.55);

	cout << "Info.\nName: " << Jazz.getName() << "\nNumber: " << Jazz.getNumber() << "\nbalance: " << Jazz.CheckBalance() << "\nPackage: " << Jazz.getPackage() << "\nCall Rate: " << Jazz.getCallRate() << endl;

	Jazz.CallCharges(8.29);*/

	char* accountNumber = new char[15]{ "12458789412797" };
	Bank bank(temp, accountNumber, 0, 25681);
	bank.SaveData();

	delete[] temp;

	return 0;
}