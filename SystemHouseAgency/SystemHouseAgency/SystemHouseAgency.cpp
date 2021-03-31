#include <iostream>
#include "SearchSystem.h"
#include <fstream>
#include "workDB.h"

using namespace std;

int main()
{
	vector<User> users;
	readUsers(users);
	readAds(ads);
	int id = User::signIn(users);
	cout << id << endl;
	SearchSystem google;
	google.setFilters();
	google.search(ads);
	writeUsers(users);
	writeAds(ads);
	system("pause");
	return 0;
}