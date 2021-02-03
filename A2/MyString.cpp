#include "MyString.h"
int MyString::length() const
{
	int i = 0;
	while (arr[i] != '\0')
	{
		i++;
	}
	return i;
}
void MyString::clear() {
	for (int i = 0; i < currentSize; i++)
	{
		arr[i] = '\0';
	}
	currentSize = 0;
}
MyString::MyString(int _size)
{
	maxSize = _size;
	arr = new char[maxSize];
	currentSize = 0;
}
MyString::MyString(const MyString& str, int startIndex, int endIndex) {
	maxSize = endIndex - startIndex + 1;
	arr = new char[maxSize] {'\0'};
	int counter = 0;
	for (int i = 0, j = startIndex; i < maxSize; j++, i++)
	{
		arr[i] = str[j];
	}
	currentSize = maxSize - 1;
}

MyString& MyString::operator=(const MyString& rhs)
{
	if (this != &rhs)
	{
		return *this;
	}
	if (arr)
	{
		delete[]arr;
		arr = nullptr;
	}
	maxSize = rhs.maxSize;
	arr = new char[maxSize];
	currentSize = rhs.currentSize;
	for (int i = 0; i < currentSize; i++)
	{
		this->arr[i] = rhs[i];
	}

	return *this;
}
void MyString::add(const char data)
{
	if (currentSize < maxSize)
		arr[currentSize++] = data;
	else
		cout << "String is full" << endl;
}
int MyString::getCurrentSize()const
{
	return currentSize;
}
const char& MyString::operator[](int index)const
{
	if (index >= 0 && index < currentSize)
		return arr[index];
	else
		return arr[0];
}
char& MyString::operator[](int index)
{
	if (index >= 0 && index < currentSize)
		return arr[index];
	else
		return arr[0];
}
MyString& MyString::operator++()
{
	for (int i = 0; i < currentSize; i++)
	{
		arr[i] = arr[i] + 1;
	}

	return *this;
}
MyString MyString::operator++(int)
{
	MyString temp;
	temp = *this;
	for (int i = 0; i < currentSize; i++)
	{
		arr[i] = arr[i] + 1;
	}
	return temp;
}
MyString& MyString::operator--()
{
	for (int i = 0; i < currentSize; i++)
	{
		arr[i] = arr[i] - 1;
	}

	return *this;
}
MyString MyString::operator--(int)
{
	MyString temp;
	temp = *this;
	for (int i = 0; i < currentSize; i++)
	{
		arr[i] = arr[i] - 1;
	}
	return temp;
}
MyString& MyString::operator+(const MyString& ref) {
	MyString temp;
	temp.maxSize = this->length() + ref.length();
	temp.currentSize = 0;
	int size = this->length() + ref.length() + 1;
	int tempSize = this->length();
	temp.arr = new char[size];
	for (int i = 0; i < tempSize; i++)
	{
		*(temp.arr + i) = *(arr + i);
		temp.currentSize++;
	}
	*(temp.arr + tempSize) = ' ';
	for (int i = temp.currentSize++; i < ref.length(); i++)
	{
		*(temp.arr + i) = *(ref.arr + i);
		temp.currentSize++;
	}
	return temp;
}
MyString::~MyString()
{
	delete[] arr;
	arr = nullptr;
	currentSize = 0;
	maxSize = 0;
}