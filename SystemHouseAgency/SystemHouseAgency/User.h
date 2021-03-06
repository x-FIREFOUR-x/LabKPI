#pragma once
#include <string>
#include <vector>
#include "Ad.h"
//#include "UserView.h"

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
	static int signIn(vector<User> users, string phoneNumber1, string password1, bool& logedIn, bool& phoneNumberCorrect);
	void signUp(string firstName1, string lastName1, string phoneNumber1, string password1);
	string getFirstName();
	string getLastName();
	string getPhoneNumber();
	string getPassword();
	void setFirstName(string);
	void setLastName(string);
	bool getInSystem();
	int getId();
	void changeProfile();
};

