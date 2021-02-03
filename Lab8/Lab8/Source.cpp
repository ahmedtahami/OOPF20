#include"Salon.h"
#include<iostream>
using namespace std;
void print(const Salon ref) {
	cout << "Id : " << ref.getId() << "\nName : " << ref.getName() << "\nGender : " << ref.getGender() << "\nContact Number : " << ref.getContactNumber() << "\nSalary : " << ref.getSalary() << "\nShift : " << ref.getShift() << endl;
}
int main()
{
	char* name = new char[12] {"Ahmed Naeem"};
	char* gender = new char[5] {"Male"};
	char* shift = new char[8] {"Morning"};
	char* number = new char[14] {"+923231610647"};
	Salon s1;
	s1.setName(name);
	s1.setGender(gender);
	s1.setContactNumber(number);
	s1.setShift(shift);
	s1.setSalary(20000);
	cout << "S1 : \n";
	print(s1);
	Salon s2(s1);
	cout << "\nS2 : \n";
	print(s2);

	Salon s3(1, name, gender, number, 50000, shift);

	return 0;
}