#pragma once
#include <string>
#include <vector>
#include "Ad.h"
#include "User.h"
class UserView
{
	string firstName;
	string lastName;
	string phoneNumber;
	string password;
	bool inSystem;
	int id;
public:
	User signUpView(vector<string> phoneNumbers);
	static int signInView(vector<User> users);
	static void readNewParameters(string& firstName, string& lastName, string& password);
	static string askPassword(bool);
};

