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
 int User::signIn(vector<User> users, string phoneNumber1, string password1, bool& logedIn, bool&  phoneNumberCorrect)
{
	 int id = 0;
	 for (int i = 0; i < users.size(); i++)
	 {
		 if (users[i].getPhoneNumber() == phoneNumber1)
		 {
			 id = i;
			 phoneNumberCorrect = true;
			 break;
		 }
	 }

	 if (phoneNumberCorrect)
	 {
		 for (int i = 0; i < users.size(); i++)
		 {
			 if (users[i].getPassword() == password1 && i == id)
			 {
				 logedIn = true;
				 break;
			 }

		 }
	 }
	 return id;
}
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

/*void User::changeProfile()
{
	bool success = false;
	if (password == UserView::askPassword(true))
		success = true;
	while (!success)
		if (password == UserView::askPassword(false))
			success = true;
	string firstName1, lastName1, password1;
	UserView::readNewParameters(firstName1, lastName1, password1);
	if (firstName1 != "-")
		firstName = firstName1;
	if (lastName1 != "-")
		lastName = lastName1;
	if (password1 != "-")
		password = password1;
}*/