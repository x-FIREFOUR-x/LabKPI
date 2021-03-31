#include <iostream>
#include "SearchSystem.h"
#include <fstream>
#include "workDB.h"

using namespace std;

int main()
{
	vector<Ad> ads;
	readAds(ads);
	writeAds(ads);
	system("pause");
	return 0;
}