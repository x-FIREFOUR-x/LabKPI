#pragma once
#include<string>
#include<vector>
#include"Ad.h"

class SearchSystem
{
private:
	std::string title;
	int minPrice, maxPrice;
	std::string city, street, house;
	int minArea, maxArea;

public:
	void setFilters();
	void search(vector<Ad>);
};

