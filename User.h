#ifndef USER_H
#define USER_H

#include <iostream>
#include <cstring>
using namespace std;
class User
{
private: //private members of class User
	string name;
	int age;
	int id;
	string password;
	string email;
public: //attributes of class User
	static int count;
	User();
	User(string, int, string, string);
	User(User& user);
	int getCount();
	bool operator==(const User& user);
	void setName(string n);
	string getName() const;
	void setPassword(string pass);
	string getPassword();
	void setEmail(string mail);
	string getEmail() const;
	void setAge(int a);
	int getAge() const;
	void setId(int id);
	int getId();
	friend ostream& operator<<(ostream& output, const User& userobj);
	friend istream& operator>>(istream& input, User& userobj);


};

#endif // USER_H
