#pragma once
class MyString
{
private:
	char* myArray;
	const int size;
public:
	MyString();
	MyString(char*);
	MyString(char*, int);
	~MyString();
	
	void setMyArray(char*);
	const char* getMyArray() const;
	const int getSize() const;
	void print() const;
};

