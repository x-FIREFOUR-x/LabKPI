#include <iostream>
#include "SearchSystem.h"
#include <fstream>
#include "workDB.h"

using namespace std;

int main()
{
	vector<User> users;
	vector<Ad> ads;
	/*User a("kj;lkk", "Dalv", "+380676972456", "password");
	users.push_back(a);*/
	readAds(ads);
	writeAds(ads);
	SearchSystem google;
	google.setFilters();
	google.search(ads);
	system("pause");
	return 0;
}