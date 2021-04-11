#include <iostream>
#include <string>
#include <vector>
#include "User.h"
int User::count = 0;
User::User()
{
	count++;
	//signUp();
	id = count - 1;
}
/*User::User(vector<string> phoneNumbers)
{
	count++;
	signUp(phoneNumbers);
	id = count - 1;
}*/
User::User(string firstName1, string lastName1, string phoneNumber1, string password1)
{
	count++;
	firstName = firstName1;
	lastName = lastName1;
	phoneNumber = phoneNumber1;
	password = password1;

}
User::User(string firstName1, string lastName1, string phoneNumber1, string password1, int id1)
{
	count++;
	firstName = firstName1;
	lastName = lastName1;
	phoneNumber = phoneNumber1;
	password = password1;
	id = id1;

}
 /*int User::signIn(vector<User> users)
{

}*/
void User::signUp(string firstName1, string lastName1, string phoneNumber1, string password1)
{
	firstName = firstName1;
	lastName = lastName1;
	phoneNumber = phoneNumber1;
	password = password1;
	
}
string User::getFirstName()
{
	return firstName;
}
string User::getLastName()
{
	return lastName;
}
string User::getPhoneNumber()
{
	return phoneNumber;
}
string User::getPassword()
{
	return password;
}
bool User::getInSystem()
{
	return inSystem;
}
int User::getId()
{
	return id;
}