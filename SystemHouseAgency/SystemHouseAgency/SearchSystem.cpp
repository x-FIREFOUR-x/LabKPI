#include "SearchSystem.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void SearchSystem::setFilters()
{
	string s;
	cout << "Put '*' if you dont want to fill the field\n";
	cout << "Enter title: ";
	cin >> title;
	cout << "Enter minPrice: ";
	cin >> s;
	if (s == "*")
		minPrice = -1;
	else
		minPrice = stoi(s);
	cout << "Enter maxPrice: ";
	cin >> s;
	if (s == "*")
		maxPrice = -1;
	else
		maxPrice = stoi(s);
	cout << "Enter city: ";
	cin >> city;
	street = "*";
	house = "*";
	if (city != "*")
	{
		cout << "Enter street: ";
		cin >> street;
		if (street != "*")
		{
			cout << "Enter house: ";
			cin >> street;
		}
	}
	cout << "Enter minArea: ";
	cin >> s;
	if (s == "*")
		minArea = -1;
	else
		minArea = stoi(s);
	cout << "Enter maxArea: ";
	cin >> s;
	if (s == "*")
		maxArea = -1;
	else
		maxArea = stoi(s);
}

void SearchSystem::search(vector<Ad> adverts, User user)
{
	vector<Ad> result;
	for (int i = 0; i < adverts.size(); i++)
	{
		bool fl = true;
		if (title != "*")
			if (adverts[i].getTitle().find(title, 0) == adverts[i].getTitle().npos)
				fl = false;
		if (minPrice != -1)
			if (adverts[i].getPrice() < minPrice)
				fl = false;
		if (maxPrice != -1)
			if (adverts[i].getPrice() > maxPrice)
				fl = false;
		if (city != "*")
			if (adverts[i].getAddress().find(city, 0) == adverts[i].getAddress().npos)
				fl = false;
		if (street != "*")
			if (adverts[i].getAddress().find(street, 0) == adverts[i].getAddress().npos)
				fl = false;
		if (house != "*")
			if (adverts[i].getAddress().find(house, 0) == adverts[i].getAddress().npos)
				fl = false;
		if (minArea != -1)
			if (adverts[i].getArea() < minArea)
				fl = false;
		if (maxArea != -1)
			if (adverts[i].getArea() > maxArea)
				fl = false;

		if (fl)
		{
			result.push_back(adverts[i]);
		}
	}
	for (int i = 0; i < result.size(); i++)
	{
		cout << endl;
		cout << i << ":" << endl;
		result[i].getInfo();
	}
	int k;
	cin >> k;
	Renter::addToLiked(result[k], user);
}