// Assignment 1.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <cstring>
#include "User.h"
#include "Book.h"

using namespace std;

int main()
{
	cout << "Let's add a user" << endl;
	cout << "Enter the user information in this order \n";
	cout << "Name Age Email Password (Space separated)\n";
	User userObj1; //first object created from class User
	cin >> userObj1; //input the object using operator ">>"
	cout << endl;
	cout << "====== User 1 info ====== \n";
	cout << userObj1; //output the object using operator "<<"
	cout << "====================================================== \n \n";
	cout << "Let's add another user" << endl;
	cout << "Enter the user information in this order \n";
	cout << "Name Age Email Password (Space separated) \n";
	User userObj2; //second object created from class User
	cin >> userObj2; //input the object using operator ">>"
	cout << endl;
	cout << "====== User 2 info ====== \n";
	cout << userObj2; //output the object using operator "<<"
	cout << "====================================================== \n \n";
	Book bookObj1; //first object created from class Book
	cout << "Let's add a book \n";
	cout << "Enter the book information in this order \n";
	cout << "Title ISBN Category (Space separated) \n";
	cin >> bookObj1; //input the object using operator ">>"
	cout << "====== Book 1 info ====== \n";
	cout << bookObj1; //output the object using operator "<<"
	cout << "====================================================== \n \n";
	Book bookObj2; //second object created from class Book
	cout << "Let's add another book \n";
	cout << "Enter the book information in this order \n";
	cout << "Title ISBN Category (Space separated) \n";
	cin >> bookObj2; //input the object using operator ">>"
	cout << "====== Book 2 info ====== \n";
	cout << bookObj2; //output the object using operator "<<"
	cout << "====================================================== \n \n";
	cout << "Let's assign an author for the first book, set the first user as an author \n";
	cout << "Let's rate the first book with 3 and 4 ratings and print the book info \n";
	bookObj1.rateBook(3); //rate the book with 3
	bookObj1.rateBook(4); //rate the book with 4 , the function will calculate 3+4 / 2
	bookObj1.setId(1);
	userObj1.setId(1);
	bookObj1.setAuthor(&userObj1); //setting the address of first user as an author of the book
	bookObj1.printInfo(); //print the information of book and its user
	cout << "====================================================== \n \n";
	cout << "====================================================== \n \n";
	cout << "Let's add a new rating for b1 with 5 and print the book info \n";
	bookObj1.rateBook(5); //a new rating with 5
	bookObj1.printInfo(); ////print the information of book and its user after being updated with new rating
	cout << "====================================================== \n \n";
	cout << "====================================================== \n \n";

}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started:
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
