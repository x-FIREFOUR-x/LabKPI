#pragma once
#include<vector>
#include"Ad.h"
#include"Renter.h"
#include"User.h"

class RenterView
{
public:
	static void showFavouriteAd(vector<Ad> ads, int i, int k);
	static void deleteFavouriteAd(vector<Ad>&ads, vector<User> user, int id);
};

