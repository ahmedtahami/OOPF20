#include<iostream>
#include "Date.h"
#include "Time.h"
#include "Name.h"
#include"MyString.h"
using namespace std;
void print(const MyString& obj)
{
	int length = obj.getCurrentSize();
	for (int i = 0; i < length; i++)
	{
		cout << obj[i] << " ";
	}

	cout << endl;
}
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
	*(temp + size) = '\0';
	return temp;
}
char* strConcat(char* arr1, char* arr2, bool addSpace = true)
{
	int size1 = strlength(arr1);
	int size2 = strlength(arr2);
	int size = size1 + size2 + 1;
	char* temp = new char[size];
	for (int i = 0; i < size1; i++)
	{
		*(temp + i) = *(arr1 + i);
	}
	if (addSpace)
	{
		*(temp + size1) = ' ';
		int i = 0;
		for (int j = size1 + 1; j < size; j++)
		{
			*(temp + j) = *(arr2 + i);
			i++;
		}
	}
	else
	{
		int i = 0;
		for (int j = size1; j < size; j++)
		{
			*(temp + j) = *(arr2 + i);
			i++;
		}
	}

	*(temp + size) = '\0';
	return temp;
}
char* strToLower(char* arr) {
	for (int i = 0; i < strlength(arr); i++)
	{
		if (arr[i] >= 65 && arr[i] <= 90)
			arr[i] = arr[i] + 32;
	}
	return arr;
}
char* strToUpper(char* arr)
{
	for (int i = 0; i < strlength(arr); i++)
	{
		if (arr[i] >= 97 && arr[i] <= 122)
			arr[i] = arr[i] - 32;
	}
	return arr;
}
int NameCompare(Name name1, Name name2) {
	char* _name1 = name1.strToLower(name1.fullName(false));
	char* _name2 = name2.strToLower(name2.fullName(false));
	bool flag = false;
	int difference = 0;
	int size = 0;
	if (name1.strlength(_name1) >= name2.strlength(_name2))
	{
		size = name1.strlength(_name1);
	}
	else
	{
		size = name2.strlength(_name2);
	}
	for (int i = 0; i < size; i++)
	{
		if (_name1[i] == _name2[i])
		{
			flag = true;
		}
		else
		{
			flag = false;
			difference = _name1[i] - _name2[i];
			if (_name1[i] > _name2[i])
			{
				return difference;
			}
			else if (_name1[i] < _name2[i])
			{
				return difference;
			}
		}
	}
	if (flag)
	{
		return 0;
	}
}
int main()
{
	//Time t(12, 1, 2, true, false, false); // incorrect format
	//t.showTime();
	/*Time t(12, 1, 1, false, false, true);
	t.showTime();*/
	//char* f = new char[7]{ "Ahmed" };
	//char* l = new char[6]{ "Naeem" };
	//char* l1 = new char[7]{ "Tahami" };
	//Name n(f, l);
	//Name n1(f, l1);
	//cout << n.fullName(true) << endl; //Ahmed Naeem
	//n.swapNames();
	//n.display(); //Naeem Ahmed
	//n.swapNames();
	//n.display(); //Ahmed Naeem
	//n.toLower();
	//n.display(); //ahmed naeem
	//n.toUpper();
	//n.display(); //AHMED NAEEM
	//n.camelCase();
	//n.display();//Ahmed Naeem
	//int result = NameCompare(n, n1); //-6 difference (between "n" and "t" in last name of both objects)
	//cout << "Comparioson Result : "<< result << endl;
	MyString str1;// make a default string of 100 size
	str1.add('[');//insert at position 1 or index 0
	str1.add('A');//insert at position 2 or index 1
	str1.add('B');//insert at position 3 or index 2
	str1.add('C');//insert at position 4 or index 3
	str1.add('D');//insert at position 5 or index 4
	str1.add('E');//insert at position 6 or index 5
	str1.add('F');//insert at position 7 or index 6
	str1.add('G');//insert at position 8 or index 7
	str1.add('h');//insert at position 9 or index 8
	str1.add('i');//insert at position 10 or index 9
	str1.add('j');//insert at position 11 or index 10
	str1.add('k');//insert at position 12 or index 11
	str1.add('l');//insert at position 13 or index 12
	str1.add('m');//insert at position 14 or index 13
	str1.add('n');//insert at position 15 or index 14
	str1.add('o');//insert at position 16 or index 15 
	str1.add('p');//insert at position 17 or index 16
	str1.add(']');//insert at position 18 or index 17
	cout << "str1\n";
	print(str1);
	cout << "Lenghth of str1 is = " << str1.length() << endl;
	cout << "str2\n";
	MyString str2(str1, 2, 9);//should copy str1 to str2 from position 2 to 9
	print(str2);
	cout << "Lenghth of str2 is = " << str2.length() << endl;
	cout << "str4\n";
	const MyString str4; //It should accesss all constant functions
	print(str4);
	cout << "Lenghth of str4 is =" << str4.length() << endl;
	str1.clear();//It should clear the string by placing null char at all indexes and setting count to zero
	cout << "After clearing str1\n";
	print(str1);
	str1.add('$');
	cout << "After adding $ to str1\n";
	print(str1);
	MyString str3;
	str3 = str1 + str2;//It will concatenate both the strings and assign it to str3
	cout << "str3\n";
	print(str3);
	MyString str5(5);//should make an empty array of size 5
	str5.add('a');
	str5.add('B');
	str5.add('c');
	str5.add('D');
	str5.add('e');
	cout << "str5\n";
	print(str5);
	str5[0] = str5[1] + 1; //add 1 to the char at 1st index and assign it to 0th index
	print(str5);
	print(str5++);//post-increment
	print(++str5);//pre-increment
	print(--str5);//pre-decrement
	print(str5--);//post-decrement
	MyString str8;
	str8 = str5;//assigning str5 to str8
	cout << "str8\n";
	print(str8);
	return 0;
}