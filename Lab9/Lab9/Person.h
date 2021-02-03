#pragma once
class Person
{
private:
	char* Name;
	int Age;
public:
	Person();
	Person(const Person&);
	Person(const char*, const int);
	void setAge(const int);
	void setName(const char*);
	char* getName();
	int getAge();
	void Display();
	~Person();
};

