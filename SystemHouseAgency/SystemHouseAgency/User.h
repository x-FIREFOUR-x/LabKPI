#pragma once
#include <string>
#include <vector>
#include "Ad.h"

using namespace std;
class User
{
	string firstName;
	string lastName;
	string phoneNumber;
	string password;
	bool inSystem;
	int id;

public:
	static int count;

public:
	User();
	User(string, string, string, string);
	User(string, string, string, string, int);
	static int signIn(vector<User>);
	void signUp();
	string getFirstName();
	string getLastName();
	string getPhoneNumber();
	string getPassword();
	bool getInSystem();
	int getId();
};

