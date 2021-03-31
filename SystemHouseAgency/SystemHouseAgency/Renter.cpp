#include "Renter.h"

void Renter::addToLiked(Ad a, User& user)
{
	vector<Ad> temp;
	a.getInfo();
	temp = user.getLikedAds();
	temp.push_back(a);
	user.setLikedAds(temp);
}