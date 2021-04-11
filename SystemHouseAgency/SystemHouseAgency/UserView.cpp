#include "UserView.h"
#include <iostream>

UserView::UserView()
{
}
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
		if (phoneNumber1.length() == 13 && numberUsed == false)
		{
			phoneNumber = phoneNumber1;
		}
		else
			if (phoneNumber1.length() != 13)
			{
				cout << "Entered phone number is too long or too short!" << endl;
				cout << "Input phone number again: ";
				cin >> phoneNumber1;
			}
			else
			{
				cout << "This phone number is already used!" << endl;
				cout << "Input another phone number: ";
				cin >> phoneNumber1;
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
			cout << "Passwords do not match!" << endl;
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

		if (logedIn)
		{
			cout << "Hello " << users[id].getFirstName() << ", you have successfully logged in to your account" << endl;
		}
		else
		{
			cout << "Input phone number or password is wrong!" << endl;
		}
	}
	return id;
}