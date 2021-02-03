#include "DynamicArray.h"
#include<string>
#include<iostream>
using namespace std;

DynamicArray::DynamicArray() {
	size = 0;
	ptr = nullptr;
	ptr = new int[size];
}
DynamicArray::DynamicArray(const DynamicArray& ref) {
	size = ref.size;
	ptr = new int[size];
	for (int i = 0; i < size; i++)
	{
		*(ptr + i) = *(ref.ptr + 1);
	}
}
DynamicArray::DynamicArray(const int size, const int* arr) {
	this->size = size;
	ptr = new int[size];
	for (int i = 0; i < size; i++)
	{
		*(ptr + i) = *(arr + 1);
	}
}
void DynamicArray::Print() const {
	for (int i = 0; i < size; i++)
	{
		if (i == (size - 1))
			cout << *(ptr + i) << endl;
		else
			cout << *(ptr + i) << ", ";
	}
}
void DynamicArray::Add(const int value) {
	for (int i = 0; i < size; i++)
	{
		*(ptr + i) = *(ptr + i) + value;
	}
}
void DynamicArray::Subtract(const int value) {
	for (int i = 0; i < size; i++)
	{
		*(ptr + i) = *(ptr + i) - value;
	}
}
void DynamicArray::Multiply(const int value) {
	for (int i = 0; i < size; i++)
	{
		*(ptr + i) = *(ptr + i) * value;
	}
}
void DynamicArray::Divide(const int value) {
	for (int i = 0; i < size; i++)
	{
		if (value == 0)
		{
			cout << "Divide By Zero Not Allowed.";
			exit(-1);
		}
		*(ptr + i) = *(ptr + i) / value;
	}
}
int DynamicArray::GetIndexOf(const int value) const {
	for (int i = 0; i < size; i++)
	{
		if (*(ptr + i) == value)
		{
			return i;
		}
		else if (*(ptr + i) == value)
		{
			return NULL;
		}
	}
}
int DynamicArray::GetValueAtIndex(const int value)const {
	return *(ptr + value);
}
void DynamicArray::InsertValueAtEnd(const int value) {
	const int newSize = size + 1;
	int* newArray = new int[newSize];
	for (int i = 0; i < newSize; i++)
	{
		*(newArray + i) = *(ptr + i);
	}
	newArray[newSize - 1] = value;
	delete[] ptr;
	ptr = nullptr;
	this->size = newSize;
	ptr = new int[size];
	for (int i = 0; i < size; i++)
	{
		*(ptr + i) = *(newArray + i);
	}
}
void DynamicArray::DeleteValue(const int value) {
	int temp = 0; //temporary holds the values to move back an index
	for (int i = 0; i < size; i++)
	{
		if (ptr[i] == value)
		{
			for (int j = i + 1; j < size; j++)
			{
				temp = ptr[j];
				ptr[j] = ptr[j + 1];
				ptr[j - 1] = temp;
			}
		}
	}
	int tempSize = size - 1;
	int *tempArray = new int[tempSize];
	for (int i = 0; i < tempSize; i++)
	{
		*(tempArray + i) = *(ptr + i);
	}
	delete[] ptr;
	ptr = nullptr;
	ptr = new int[tempSize];
	this->size = tempSize;
	for (int i = 0; i < size; i++)
	{
		*(ptr + i) = *(tempArray + i);
	}
	delete[] tempArray;
	tempArray = nullptr;
}
void DynamicArray::CopyArray(const int _size, const int* arr) {
	delete[] ptr;
	ptr = nullptr;
	this->size = _size;
	ptr = new int[size];
	for (int i = 0; i < size; i++)
	{
		*(ptr + i) = *(arr + i);
	}
}
void DynamicArray::CopyObject(const DynamicArray& other) {
	size = other.size;
	delete[] ptr;
	ptr = nullptr;
	ptr = new int[size];
	for (int i = 0; i < size; i++)
	{
		*(ptr + i) = *(other.ptr + 1);
	}
}
void DynamicArray::SortAscending() {
	for (int i = 0; i < size; i++)
	{
		for (int j = i+1; j < size; j++)
		{
			if (ptr[i] > ptr[j])
			{
				int temp = ptr[i];
				ptr[i] = ptr[j];
				ptr[j] = temp;
			}
		}
	}
}
void DynamicArray::SortDescending() {
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (ptr[i] < ptr[j])
			{
				int temp = ptr[i];
				ptr[i] = ptr[j];
				ptr[j] = temp;
			}
		}
	}
}
DynamicArray DynamicArray::MergeArray(const DynamicArray& ref) {
	int oldSize = this->size;
	int newSize = oldSize + ref.size;
	int* tempArray = new int[newSize];
	for (int i = 0; i < newSize; i++)
	{
		*(tempArray + i) = *(ptr + i);
	}
	for (int i = 0; i < newSize; i++)
	{
		*(tempArray + i) = *(ref.ptr + i);
	}
	DynamicArray obj(size,tempArray);
	return obj;
}
DynamicArray DynamicArray::MergeArrayAndSort(const DynamicArray& ref) {
	int oldSize = this->size;
	int newSize = oldSize + ref.size;
	int* tempArray = new int[newSize];
	for (int i = 0; i < newSize; i++)
	{
		*(tempArray + i) = *(ptr + i);
	}
	for (int i = 0; i < newSize; i++)
	{
		*(tempArray + i) = *(ref.ptr + i);
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < newSize; j++)
		{
			if (tempArray[i] > tempArray[j])
			{
				int temp = tempArray[i];
				tempArray[i] = tempArray[j];
				tempArray[j] = temp;
			}
		}
	}
	DynamicArray obj(size, tempArray);
	return obj;
}
DynamicArray::~DynamicArray() {
	delete[] ptr;
	ptr = nullptr;
	size = 0;
}