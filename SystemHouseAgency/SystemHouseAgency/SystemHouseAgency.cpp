#include <iostream>
//#include "User.h"
#include "SearchSystem.h"
#include <fstream>
#include "workDB.h"

using namespace std;

int main()
{
	vector<User> users;
	User a("kj;lkk", "Dalv", "+380676972456", "password");
	users.push_back(a);
	readUsers(users);
	writeUsers(users);
	system("pause");
	return 0;
}