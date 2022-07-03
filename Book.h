#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <cstring>
#include "User.h"
using namespace std;
class Book
{
	//Private members of class Book
private:
	string title;
	string isbn;
	int id;
	string category;
	double averageRating;
	User* author; //pointer named author of class author


public: // class attributes
	static int count;
	Book();
	Book(string, string, string, User* au);
	Book(const Book& book);
	int getcount();
	void setTitle(string tit);
	string getTitle();
	void setISBN(string is);
	string getISBN();
	void setId(int ID);
	int getId();
	void setCategory(string categ);
	string getCategory();
	void setAuthor(User* au);
	User getAuthor();
	void rateBook(int);
	bool operator==(const Book& book);
	friend ostream& operator<<(ostream& output, const Book& book);
	friend istream& operator>>(istream& input, Book& book);
	void printInfo();

};

#endif // BOOK_H


