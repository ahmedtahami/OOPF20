#include<iostream>
#include"DynamicArray.h"
using namespace std;
int strlength(char* arr)
{
	int i = 0;
	while (arr[i] != 0)
	{
		i++;
	}
	return i;
}
char* strcpy(char* arr)
{
	int size = strlength(arr);
	char* temp = new char[size];
	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	return temp;
}
char* strConcat(char* arr1, char* arr2)
{
	int size1 = strlength(arr1);
	int size2 = strlength(arr2);
	int size = size1 + size2 + 1;
	char* temp = new char[size];
	for (int i = 0; i < size1; i++)
	{
		*(temp + i) = *(arr1 + i);
	}
	*(temp + size1) = ' ';
	int i = 0;
	for (int j = size1 + 1; j < size; j++)
	{
		*(temp + j) = *(arr2 + i);
		i++;
	}
	*(temp + size) = '\0';
	return temp;
}
int main()
{
	char* arr = new char[6]{ "Ahmed" };
	char* arr1 = new char[6]{ "Naeem" };
	char* result = strConcat(arr, arr1);
	cout << result;
	return 0;
}