#pragma once
class Name
{
public:
	Name();
	Name(char* firstName, char* lastName);
	Name(const Name&);
	void copyName(Name&);
	void camelCase();
	void toLower();
	void toUpper();
	int nameLength();
	void swapNames();
	void display();
	char* fullName(bool addSpace);
	int strlength(char*);
	char* strcpy(char*);
	char* strConcat(char*, char*, bool);
	char* strToLower(char*);
	char* strToUpper(char*);
	Name operator = (const Name&);
	~Name();
private:
	char* firstName;
	char* lastName;
	bool isValidName();
	
};

