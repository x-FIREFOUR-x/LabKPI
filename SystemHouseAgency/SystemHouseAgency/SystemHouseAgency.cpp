#include <iostream>
#include "SearchSystem.h"
#include <fstream>
#include "workDB.h"

using namespace std;

int main()
{
	int id;
	vector<Ad> ads;
	vector<User> users;
	readUsers(users);
	readAds(ads);
	id = User::signIn(users);
	SearchSystem google;
	google.setFilters();
	google.search(ads, users[id]);
	writeUsers(users);
	writeAds(ads);
	system("pause");
	return 0;
}