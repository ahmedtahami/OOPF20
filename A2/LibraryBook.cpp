#include "LibraryBook.h"

LibraryBook::LibraryBook() {
	this->Publisher;
	this->Author;
	this->lastIssue;
	this->Title = nullptr;
	this->ISBN = nullptr;
	this->Quantity = 0;
}
LibraryBook::LibraryBook(char* title, char* isbn, const Name author, Name publisher, Date lastIssueDate, int quantity) {
	Title = title;
	ISBN = isbn;
	Author = author;
	Publisher = publisher;
	lastIssue = lastIssueDate;
	Quantity = quantity;
}
LibraryBook::LibraryBook(char* title, char* isbn, const Name author, Name publisher) {
	Title = title;
	ISBN = isbn;
	Author = author;
	Publisher = publisher;
}
LibraryBook::LibraryBook(const LibraryBook& ref) {
	Title = ref.Title;
	ISBN = ref.ISBN;
	Author = ref.Author;
	Publisher = ref.Publisher;
	lastIssue = ref.lastIssue;
	Quantity = ref.Quantity;

}
void LibraryBook::setISBN(char* isbn) {
	ISBN = isbn;
}
char* LibraryBook::getISBN() const {
	return ISBN;
}
void LibraryBook::setTitle(char* title) {
	Title = title;
}
char* LibraryBook::getTitle() const {
	return Title;
}
void LibraryBook::setAuthor(Name author) {
	Author = author;
}
Name LibraryBook::getAuthor() const {
	return Author;
}
void LibraryBook::setQuantity(int quantity) {
	Quantity = quantity;
}
int LibraryBook::getQuantity() const {
	return Quantity;
}
void LibraryBook::setPublisher(Name publisher) {
	Publisher = publisher;
}
Name LibraryBook::getPublisher() const {
	return Publisher;
}
void LibraryBook::setlastIssue(Date lastIssueDate) {
	lastIssue = lastIssueDate;
}
Date LibraryBook::getlastIssue() const {
	return lastIssue;
}
LibraryBook::~LibraryBook() {
	delete[] ISBN;
	ISBN = nullptr;
	delete[] Title;
	Title = nullptr;
	Quantity = 0;
}