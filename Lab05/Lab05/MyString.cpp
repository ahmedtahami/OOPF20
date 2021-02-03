#include "MyString.h"
#include<iostream>
MyString::MyString() : size(10) {
	myArray = new char[size];
}
MyString::MyString(char* cString) : size(strlen(cString)) {
	myArray = new char[size];
	myArray = cString;
}
MyString::MyString(char* cString, int _size) : size(_size) {
	myArray = new char[_size];
}
MyString::~MyString() {
	if (myArray)
	{
		delete[] myArray;
	}
}

void MyString::setMyArray(char* cString) {
	myArray = new char[size];
	myArray = cString;
}
const char* MyString::getMyArray() const {
	return myArray;
}
const int MyString::getSize() const {
	return size;
}
void MyString::print() const {
	std::cout << myArray << std::endl;
}