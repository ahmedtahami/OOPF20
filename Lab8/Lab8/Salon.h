#pragma once
class Salon
{
private:
	const int Id;
	char* Name;
	char* Gender;
	char* ContactNumber;
	double Salary;
	char* Shift;
public:
	Salon();
	Salon(int id, char* name, char* gender, char* contactNumber, double salary, char* shift);
	Salon(const Salon&);
	void setName(char*);
	void setGender(char*);
	void setContactNumber(char*);
	void setShift(char*);
	void setSalary(double);
	int getId() const;
	char* getName() const;
	char* getGender() const;
	char* getContactNumber() const;
	char* getShift() const;
	double getSalary() const;
	~Salon();
};

