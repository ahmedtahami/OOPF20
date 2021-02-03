#include<iostream>
#include "Process.h"
using namespace std;
int Process::sharedLocation;
int main()
{
	Process p;
	Process* ptr = new Process[3]{ Process(4), Process(6), Process(8) };
	cout << ptr[0].getID() << endl;
	cout << ptr[1].getID() << endl;
	cout << ptr[2].getID() << endl;
	cout << Process::getStatus() << endl;
	ptr[1].setStatus();
	cout << Process::getStatus() << endl;
	return 0;
}