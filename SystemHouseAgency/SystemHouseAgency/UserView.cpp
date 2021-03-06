#include "UserView.h"
#include <iostream>

User UserView::signUpView(vector<string> phoneNumbers)
{
	string password1;
	string password2;
	string phoneNumber1;

	cout << "Input first name: ";
	if (cin.peek() == '\n') 
	{
		cin.ignore();
	}
	getline(cin, firstName);

	cout << "Input last name: ";
	if (cin.peek() == '\n')
	{
		cin.ignore();
	}
	getline(cin, lastName);

	cout << "Input phone number: ";
	if (cin.peek() == '\n')
	{
		cin.ignore();
	}
	getline(cin, phoneNumber1);
	while (phoneNumber == "")
	{
		bool numberUsed = false;
		for (int i = 0; i < phoneNumbers.size(); i++)
		{
			if (phoneNumbers[i] == phoneNumber1)
			{
				numberUsed = true;
				break;
			}
		}

		bool numberIncludeNotDigit = false;
		for (int i = 1; i < phoneNumber1.length(); i++)
		{
			char c = phoneNumber1[i];
			if (!isdigit(c))
			{
				numberIncludeNotDigit = true;
				break;
			}
		}

		if (phoneNumber1.length() != 13)
		{
			cout << " !Entered phone number is too long or too short!" << endl;
			cout << "Input phone number again: ";
			if (cin.peek() == '\n')
			{
				cin.ignore();
			}
			getline(cin, phoneNumber1);
		}
		else
		if (numberUsed)
			{
				cout << " !This phone number is already used!" << endl;
				cout << "Input another phone number: ";
				if (cin.peek() == '\n')
				{
					cin.ignore();
				}
				getline(cin, phoneNumber1);
			}
			else
			if (phoneNumber1[0] != '+' || numberIncludeNotDigit)
			{
				cout << " !This phone number include inadmissible chars!" << endl;
				cout << "Input another phone number: ";
				if (cin.peek() == '\n')
				{
					cin.ignore();
				}
				getline(cin, phoneNumber1);
			}
			else
			{
				phoneNumber = phoneNumber1;
			}
	}


	cout << "Input password: ";
	if (cin.peek() == '\n')
	{
		cin.ignore();
	}
	getline(cin, password1);
	cout << "Confirm password: ";
	if (cin.peek() == '\n')
	{
		cin.ignore();
	}
	getline(cin, password2);

	while (password == "")
	{
		if (password1 == password2)
		{
			bool ContainSpace = false;
			for (int i = 0; i < password1.length(); i++)
			{
				if (password1[i] == ' ')
				{
					ContainSpace = true;
					break;
				}
			}
			if (!ContainSpace)
			{
				password = password1;
			}
			else
			{
				cout << " !Password cannot contain spaces!" << endl;
				cout << "Input password again: ";
				if (cin.peek() == '\n')
				{
					cin.ignore();
				}
				getline(cin, password1);

				cout << "Repeat password: ";
				if (cin.peek() == '\n')
				{
					cin.ignore();
				}
				getline(cin, password2);
			}
		}
		else
		{
			cout << " !Passwords do not match!" << endl;
			cout << "Input password again: ";
			if (cin.peek() == '\n')
			{
				cin.ignore();
			}
			getline(cin, password1);

			cout << "Repeat password: ";
			if (cin.peek() == '\n')
			{
				cin.ignore();
			}
			getline(cin, password2);
		}
	}

	User u(firstName, lastName, phoneNumber, password);

	return u;
}
int UserView::signInView(vector<User> users)
{
	int id;
	string phoneNumber1;
	string password1;

	bool logedIn = false;
	bool phoneNumberCorrect = false;

	while (!logedIn)
	{
		phoneNumberCorrect = false;
		cout << "Input your phone number: ";
		if (cin.peek() == '\n')
		{
			cin.ignore();
		}
		getline(cin, phoneNumber1);

		cout << "Input your password: ";
		if (cin.peek() == '\n')
		{
			cin.ignore();
		}
		getline(cin, password1);

		id = User::signIn(users, phoneNumber1, password1, logedIn, phoneNumberCorrect);

		if (logedIn)
		{
			cout << endl << "Hello " << users[id].getFirstName() << ", you have successfully logged in to your account" << endl;
		}
		else
		{
			cout << " !Input phone number or password is wrong!" << endl;
		}
	}
	return id;
}

void UserView::readNewParameters(string& firstName, string& lastName, string& password)
{
	string s = "";
	cout << "Input new first name(if you don't want change this parameter input -): ";
	if (cin.peek() == '\n') {
		cin.ignore();
	}
	getline(cin, firstName);
	cout << "Input new last name(if you don't want change this parameter input -): ";
	if (cin.peek() == '\n') {
		cin.ignore();
	}
	getline(cin, lastName);
	
	string password1, password2;
	bool success = false;
	while (!success)
	{
		cout << "Input new password(if you don't want change this parameter input -): ";
		if (cin.peek() == '\n') {
			cin.ignore();
		}

		getline(cin, password1);
		if (password1 == "-")
		{
			password = password1;
			success = true;
		}
		else
		{
			cout << "Repeat new password: ";
			getline(cin, password2);
			if (password1 == password2)
			{
				password = password1;
				success = true;
			}
			else
			{
				cout << "password are different" << endl;
			}
		}
	}
}

string UserView::askPassword(bool fl)
{
	string password;
	if (!fl)
	{
		cout << " !Wrong password" << endl;
	}
	cout << "Enter your password: ";
	if (cin.peek() == '\n') {
		cin.ignore();
	}
	getline(cin, password);
	return password;
}