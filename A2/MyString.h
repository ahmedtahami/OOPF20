#pragma once
#include<iostream>
using namespace std;
class MyString
{
	char* arr;
	int currentSize;
	int maxSize;
public:
	MyString(int _size = 100);
	MyString(const MyString&, int, int);
	void add(const char data);
	int getCurrentSize()const;
	const char& operator[](int index)const;
	char& operator[](int index);
	MyString& operator=(const MyString& rhs);
	MyString& operator++();
	MyString operator++(int);
	MyString& operator--();
	MyString operator--(int);
	MyString& operator+(const MyString&);
	int length() const;
	void clear();

	~MyString();
};
