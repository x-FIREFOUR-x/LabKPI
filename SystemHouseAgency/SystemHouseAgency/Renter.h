#pragma once
#include "User.h"
#include <vector>

using namespace std;

class Renter
{
public:
	static void addToLiked(Ad&, string);
	static void showFavouriteAds(vector<Ad>, string);
	static void deleteFavouriteAds(Ad&, string);
};

