#include "Renter.h"
#include <iostream>

void Renter::addToLiked(Ad& a, string phoneNumber)
{
	bool fl = true;
	vector<string> temp;
	temp = a.getLikedUsers();
	for (int i = 0; i < temp.size(); i++)
		if (temp[i] == phoneNumber)
			fl = false;
	if (fl)
		temp.push_back(phoneNumber);
	a.setLikedUsers(temp);
}

void Renter::showFavouriteAds(vector<Ad> ads, string phoneNumber)
{
	for (int i = 0; i < ads.size(); i++)
	{
		vector<string> likedUsers = ads[i].getLikedUsers();
		for (int j = 0; j < likedUsers.size(); j++)
			if (likedUsers[j] == phoneNumber)
			{
				ads[i].getInfo();
				cout << endl;
				break;
			}
	}
}

void Renter::deleteFavouriteAds(Ad& a, string phoneNumber)
{
	int ind;
	vector<string> temp;
	temp = a.getLikedUsers();
	for (int i = 0; i < temp.size(); i++)
		if (temp[i] == phoneNumber)
			ind = i;
	temp.erase(temp.begin() + ind);
	a.setLikedUsers(temp);
}