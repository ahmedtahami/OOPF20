#include<iostream>
#include"Person.h"
using namespace std;
int main() {
	Person p;
	char* name = new char[12]{ "Ahmed Naeem" };
	p.setName(name);
	cout << p.getName();
	return 0;
}