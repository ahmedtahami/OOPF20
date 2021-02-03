#include "Chair.h"
#include <string.h>
#include <iostream>
using namespace std;
Chair::Chair() {
	Type = nullptr;
}
Chair::Chair(const Chair& obj) {
	Type = deepCopy(obj.Type);
}
Chair::Chair(char* arr) {
	Type = deepCopy(arr);
}
void Chair::setType(char* arr) {
	Type = deepCopy(arr);
}
char* Chair::getType() {
	char* temp = deepCopy(Type);
	return temp;
}
char* deepCopy(char* arr)
{
	int size = strlen(arr) + 1;
	char* temp = new char[size];
	for (int i = 0; i < size; i++)
	{
		*(temp + i) = *(arr + i);
	}
	return temp;
}
void Chair::Display() {
	cout << Type << endl;
}
Chair::~Chair() {
	delete[] Type;
	Type = nullptr;
}