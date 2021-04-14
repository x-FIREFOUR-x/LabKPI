#include "RenterView.h"
#include<iostream>

using namespace std;

void RenterView::showFavouriteAd(vector<Ad> ads, int i, int k)
{
	cout << k << ":" << endl;
	ads[i].getInfo();
	cout << endl;
}

void RenterView::deleteFavouriteAd(vector<Ad>&ads, vector<User> users, int id)
{
	int k;
	bool success = false;
	while (!success)
	{
		cout << "Choose ads which you want to delete: ";
		string s = "";
		cin >> s;
		bool fl = true;
		for (int i = 0; i < s.length(); i++)
			if (!isdigit(s[i]))
				fl = false;
		if (fl)
		{
			k = stoi(s);
			success = true;
		}
		else
		{
			cout << " !Put right number" << endl;
		}
	}
	Renter::deleteFavouriteAds(ads, users[id].getPhoneNumber(), k - 1);
}