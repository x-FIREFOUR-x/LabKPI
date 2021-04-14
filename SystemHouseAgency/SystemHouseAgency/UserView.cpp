#include "UserView.h"
#include <iostream>

User UserView::signUpView(vector<string> phoneNumbers)
{
	string password1;
	string password2;
	string phoneNumber1;

	cout << "Input first name: ";
	cin >> firstName;

	cout << "Input last name: ";
	cin >> lastName;

	cout << "Input phone number: ";
	cin >> phoneNumber1;
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
			cin >> phoneNumber1;
		}
		else
		if (numberUsed)
			{
				cout << " !This phone number is already used!" << endl;
				cout << "Input another phone number: ";
				cin >> phoneNumber1;
			}
			else
			if (phoneNumber1[0] != '+' || numberIncludeNotDigit)
			{
				cout << " !This phone number include inadmissible chars!" << endl;
				cout << "Input another phone number: ";
				cin >> phoneNumber1;
			}
			else
			{
				phoneNumber = phoneNumber1;
			}
	}


	cout << "Input password:";
	cin >> password1;
	cout << "Confirm password:";
	cin >> password2;
	while (password == "")
	{
		if (password1 == password2)
		{
			password = password1;
		}
		else
		{
			cout << " !Passwords do not match!" << endl;
			cout << "Input password again: ";
			cin >> password1;
			cout << "Repeat password: ";
			cin >> password2;
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
		cin >> phoneNumber1;
		cout << "Input your password: ";
		cin >> password1;

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