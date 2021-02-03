#pragma once
class Chair
{
private:
	char* type;
public:
	Chair();
	Chair(char*);
	void setType(char*);
	char* getType();
	~Chair();
	Chair(const Chair& obj);
	void display();
};

