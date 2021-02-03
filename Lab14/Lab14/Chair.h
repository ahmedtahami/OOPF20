#pragma once
class Chair
{
private:
	char* Type;
	char* deepCopy(char*);
public:
	Chair();
	Chair(const Chair&);
	Chair(char*);
	void setType(char*);
	char* getType();
	void Display();
	~Chair();
};

