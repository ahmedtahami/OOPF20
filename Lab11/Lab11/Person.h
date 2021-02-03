#pragma once
class Person
{
private:
	char* Name;
	char* Address;
	char* PhoneNumber;
public:
	Person();
	Person(const Person&);
	Person(char* name, char* address, char* PhoneNumber);
	void setName(char*);
	void setAddress(char*);
	void setPhoneNumber(char*);
	char* getName();
	char* getAddress();
	char* getPhoneNumber();
	void Display();
	char* cpyDeep(char*);
	~Person();
};

