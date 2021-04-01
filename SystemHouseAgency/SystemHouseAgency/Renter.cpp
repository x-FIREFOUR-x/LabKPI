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

bool Renter::showFavouriteAds(vector<Ad> ads, string phoneNumber)
{
	int k = 1;
	bool fl = false;
	for (int i = 0; i < ads.size(); i++)
	{
		vector<string> likedUsers = ads[i].getLikedUsers();
		for (int j = 0; j < likedUsers.size(); j++)
			if (likedUsers[j] == phoneNumber)
			{
				fl = true;
				cout << k << ":" << endl;
				k++;
				ads[i].getInfo();
				cout << endl;
				break;
			}
	}
	return fl;
}

void Renter::deleteFavouriteAds(vector<Ad>& ads, string phoneNumber, int id)
{
	int ind;
	bool fl = false;
	int currentId = 0;
	for (int i = 0; i < ads.size(); i++)
	{
		vector<string> likedUsers = ads[i].getLikedUsers();
		for (int j = 0; j < likedUsers.size(); j++)
		{
			if (likedUsers[j] == phoneNumber)
			{
				if (currentId == id)
				{
					likedUsers.erase(likedUsers.begin() + j);
					ads[i].setLikedUsers(likedUsers);
					fl = true;
					break;
				}
				else
				{
					++currentId;
				}
			}
		}
		if (fl)
			break;
	}
	//temp = a.getLikedUsers();
	/*for (int i = 0; i < temp.size(); i++)
		if (temp[i] == phoneNumber)
			ind = i;
	temp.erase(temp.begin() + ind);*/
	//a.setLikedUsers(temp);
}