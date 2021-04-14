#pragma once
#include<string>
#include<vector>
#include"Renter.h"

class SearchSystem
{
private:
	std::string title;
	int minPrice, maxPrice;
	std::string city, street, house;
	int minArea, maxArea;

public:
	SearchSystem(std::string, int, int, std::string, std::string, std::string, int, int);
	vector<int> search(vector<Ad>);
	bool pushToLiked(vector<Ad>&, vector<int>, User, string);
};

