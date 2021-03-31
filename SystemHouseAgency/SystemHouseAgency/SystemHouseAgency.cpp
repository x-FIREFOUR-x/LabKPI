#include <iostream>
#include <fstream>
#include "workDB.h"
#include "SearchSystem.h"
#include "Owner.h"

using namespace std;

int main()
{
	vector<Ad> ads;
	readAds(ads);
	writeAds(ads);
	system("pause");
	return 0;
}