#pragma once
#include<string>
#include"SearchSystem.h"
#include<vector>
#include"Ad.h"
#include"User.h"

class SearchSystemView
{
private:
	std::string title;
	int minPrice, maxPrice;
	std::string city, street, house;
	int minArea, maxArea;

public:
	SearchSystemView();
	void showResults(vector<Ad>);
	void showResults(vector<Ad>&, User);
};

