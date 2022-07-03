#include "Book.h"
#include "User.h"
using namespace std;

int Book::count = 0; //intialization of the static variable "count" to zero
//and it will increase with every object created
//the static variable must be intialized outside the class
Book::Book()
{   //default constructor
	//used to give default values
	count++; //incremental the count
	title = " "; //intialize title to empty string
	isbn = " "; //intialize isbn to empty string
	category = " "; //intialize category to empty string
	averageRating = 0.0; //intialize averageRating to zero
}

Book::Book(string tit, string is, string categ, User* au)
{
	//parameterized constructor
	title = tit;
	isbn = is;
	category = categ;
	author = au;

}
Book::Book(const Book& book)
{
	// copy constructor used to copy the data of an object to another object
	title = book.title;
	isbn = book.isbn;
	category = book.category;
}

int Book::getcount()
{  //function to return value of the static variable count
	return count;
}
/*Setter or Mutator is used to store values or modify values which are already founded
in the attributes*/

/*Getter or Accessor is used to restore values from the the attributes*/

void Book::setTitle(string tit)
{
	//Function to set value to title
	title = tit;
}

string Book::getTitle()
{
	//Function to get value of title
	return title;
}

void Book::setISBN(string is)
{
	//Function to set value to ISBN
	isbn = is;
}

string Book::getISBN()
{
	//Function to get value of ISBN
	return isbn;
}

void Book::setId(int ID)
{
	//Function to set value to id
	id = (ID >= 0) ? ID : 0; //ternary operator
	// if the id'value greater than zero, set the value to id, if it's not set zero as a value to the id
}

int Book::getId()
{
	//Function to get value of id
	return id;
}

void Book::setCategory(string categ)
{
	//Function to set value to category
	category = categ;
}

string Book::getCategory()
{
	//Function to get value of category
	return category;
}

void Book::setAuthor(User* au)
{
	//ASSOCIATION
	//linking class User with class Book by setting the user as an author of the book
	author = au;
}

User Book::getAuthor()
{
	//Function to get the pointer author feom class User
	return *author;
}

double sumOfRatings = 0;
void Book::rateBook(int rating)
{	 //function to update the average rating the class Book
	static int numberOfRatings = 0;
	numberOfRatings++;
	sumOfRatings += rating;
	averageRating = sumOfRatings / numberOfRatings;

}


bool Book::operator==(const Book& book)
{
	//Operator overloading using "=="
	//operator to check if the data of the first book is the same as the data of the second book
	if ((title == book.title) && (isbn == book.isbn) && (category == book.category) && (id == book.id) && (author == book.author))
		return true; // if they are same, return true
	else
		return false; //if they're not, return false
}

void Book::printInfo()
{
	//function to print the information of the book and the author
	cout << "====== Book 1 info ======\n";
	cout << "Title: " << title << "|ISBN: " << isbn << "|Id: " << id << "|Category: " << category << "|Avg rating: " << averageRating << endl;
	cout << endl;
	cout << "====== User 1 info ====== \n";
	cout << "Name: " << author->getName() << "|Age: " << author->getAge() << "|Id: " << author->getId() << "|Email: " << author->getEmail() << endl;
}


ostream& operator<<(ostream& output, const Book& book)
{
	//Operator overloading using "<<"
	//function created from output stream to output objects including the data
	output << "Title: " << book.title << "|ISBN: " << book.isbn << "|Id: " << book.count << "|Category: " << book.category << "|Avg rating: " << book.averageRating << endl;
	return output;
}

istream& operator>>(istream& input, Book& book)
{
	//Operator overloading using ">>"
	//function created from input stream to input objects
	input >> book.title >> book.isbn >> book.category;
	return input;
}
