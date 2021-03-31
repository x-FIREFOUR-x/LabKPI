#include <iostream>
#include <string>
#include "User.h"
int User::count = 0;
User::User()
{
	count++;
	signUp();
	id = count - 1;
}
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
void User::signIn()
{

}
void User::signUp()
{
	string password1;
	string password2;
	string phoneNumber1;

	cout  << "Input first name: " ;
	cin >> firstName;

	cout << "Input last name: ";
	cin >> lastName;

	cout  << "Innput phone number: " ;
	cin >> phoneNumber1;
	while (phoneNumber == "")
	{
		if (phoneNumber1.length() == 13)
		{
			phoneNumber = phoneNumber1;
		}
		else
		{
			cout  << "Entered phone number is too long or too short!" << endl;
			cout  << "Innput phone number again: ";
			cin >> phoneNumber1;
		}
	}

	cout << "Input password:";
	cin >> password1;
	cout  << "Confirm password:";
	cin >> password2;
	while (password == "")
	{
		if (password1 == password2)
		{
			password = password1;
		}
		else
		{
			cout << "Passwords do not match!" << endl;
			cout << "Input password again:";
			cin >> password1;
			cout << "Repeat password:";
			cin >> password2;
		}
	}
	
}
/*void User::getInfo()
{
	cout << "Name: " << name << endl;
	cout << "phoneNumber: " << phoneNumber << endl;
	cout << "password: " << password << endl;
	cout << "id: " << id << endl;
}
void User::setInfo()
{
	cout << endl << "Name: ";
	cin >> name;
	cout << endl << "phoneNumber: ";
	cin >> phoneNumber;
	cout << endl << "password: " << password << endl;
	cin >> password;
}*/
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
