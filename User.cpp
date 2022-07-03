#include "User.h"
int User::count = 0; //static variable intialized to zero


User::User()
{
	// default constructor
	count++;
	name = " "; //intialize name to empty string
	age = 0; //intialize age to zero
	password = " "; //intialize password to empty string
	email = " "; //intialize email to empty string
}



User::User(string n, int a, string mail, string pass)
{
	//parameterized constructor
	name = n;
	age = a;
	email = mail;
	password = pass;
}

User::User(User& user)
{
	//copy constructor
	name = user.name;
	age = user.age;
	password = user.password;
	email = user.email;
}

int User::getCount()
{
	//Function to get value of the static variable "count"
	return count;
}

bool User::operator==(const User& user)
{
	//Operator overloading using "=="
	//Function to check if objects have same data
	if ((email == user.email) && (name == user.name) && (age == user.age) && (id == user.id))
	{
		return true; //if it's same , return true
	}
	else
	{
		return false; //if it's not , return false
	}


}

void User::setName(string n)
{
	//Function to set value to name
	name = n;
}

string User::getName() const
{
	//Function to get value of name
	return name;
}

void User::setPassword(string pass)
{
	//Function to set value to password
	password = pass;
}

string User::getPassword()
{
	//Function to get value of password
	return password;
}

void User::setEmail(string mail)
{
	//Function to set value to email
	email = mail;
}

string User::getEmail() const
{
	//Function to get value of email
	return email;
}

void User::setAge(int a)
{
	//Function to set value to age
	age = a;
}

int User::getAge() const
{
	//Function to get value of age
	return age;
}

void User::setId(int ID)
{
	//Function to set value to id
	id = (ID >= 0) ? ID : 0; //ternary operator

}

int User::getId()
{
	//Function to get value of id
	return id;
}


ostream& operator<<(ostream& output, const User& userobj)
{
	//Operator overloading using "<<"
	//Function to output object
	output << "Name: " << userobj.name << "|Age: " << userobj.age << "|Id: " << userobj.count << "|Email: " << userobj.email << endl;
	return output;
}

istream& operator>>(istream& input, User& userobj)
{
	//Operator overloading using ">>"
	//Function to input object
	input >> userobj.name >> userobj.age >> userobj.email >> userobj.password;
	return input;
}
