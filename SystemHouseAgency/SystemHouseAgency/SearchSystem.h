#pragma once
#include<string>
#include<vector>

class SearchSystem
{
private:
	std::string name;
	int minPrice, maxPrice;
	std::string city, street, house;
	int minSquare, maxSquare;

public:
	void setFilters();
	//vector<ads> search();
};

