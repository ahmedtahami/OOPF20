#include"Date.h"
#include "Name.h"
#pragma once
class LibraryBook
{
public:
	LibraryBook();
	LibraryBook(char* Title, char* ISBN, const Name Author, Name Publisher, Date LastIssueDate, int Quantity);
	LibraryBook(char* Title, char* ISBN, const Name Author, Name Publisher);
	LibraryBook(const LibraryBook&);
	void setISBN(char*);
	char* getISBN() const;
	void setTitle(char*);
	char* getTitle() const;
	void setAuthor(Name);
	Name getAuthor() const;
	void setQuantity(int);
	int getQuantity() const;
	void setPublisher(Name);
	Name getPublisher() const;
	void setlastIssue(Date);
	Date getlastIssue() const;
	~LibraryBook();
private:
	char* ISBN;
	char* Title;
	Name Author;
	Name Publisher;
	int Quantity;
	Date lastIssue;
};

