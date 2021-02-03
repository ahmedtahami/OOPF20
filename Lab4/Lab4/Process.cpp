#include"Process.h"
#include<iostream>
using namespace std;

Process::Process() :p_id(sharedLocation++)
{
	cout << "Default " << endl;
}
Process::Process(int id) : p_id(sharedLocation = sharedLocation + id)
{
	cout << "Parameterized" << endl;
}
int Process::getID()
{
	return p_id;
}
void Process::setStatus()
{
	sharedLocation = -1;
}
int Process::getStatus()
{
	return sharedLocation;
}