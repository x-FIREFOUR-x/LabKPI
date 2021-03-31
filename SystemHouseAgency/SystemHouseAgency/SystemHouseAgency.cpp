#include <iostream>
#include <fstream>
#include "workDB.h"
#include "SearchSystem.h"
#include "Owner.h"

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