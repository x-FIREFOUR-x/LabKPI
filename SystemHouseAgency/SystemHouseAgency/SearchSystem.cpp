#include "SearchSystem.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void SearchSystem::setFilters()
{
	string s;
	cout << "Put '*' if you dont want to fill the field\n";
	cout << "Enter name: ";
	cin >> name;
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

/*void SearchSystem::search(vector<Ad> adverts)
{
	vector<Ad> result;
	for (int i = 0; i < adverts.size(); i++)
	{
		bool fl = true;
		if (name != "*")
			if (adverts[i].GetName().find(name, 0) == adverts[i].GetName().npos)
				fl = false;
		if (minPrice != -1)
			if (adverts[i].GetPrice() < minPrice)
				fl = false;
		if (maxPrice != -1)
			if (adverts[i].GetPrice() > maxPrice)
				fl = false;
		if (city != "*")
			if (adverts[i].GetAddress().find(city, 0) == adverts[i].GetAddress().npos)
				fl = false;
		if (street != "*")
			if (adverts[i].GetAddress().find(street, 0) == adverts[i].GetAddress().npos)
				fl = false;
		if (house != "*")
			if (adverts[i].GetAddress().find(house, 0) == adverts[i].GetAddress().npos)
				fl = false;
		if (minArea != -1)
			if (adverts[i].GetArea() < minArea)
				fl = false;
		if (maxPrice != -1)
			if (adverts[i].GetArea() > maxArea)
				fl = false;

		if (fl)
		{
			result.push_back(adverts[i]);
		}
	}
	for (int i = 0; i < result.size(); i++)
		cout << i << " " << result[i].GetName() << endl;
	string s = "";
	while (s != "exit")
	{
		cin >> s;
		result[stoi(s)].GetInfo();
	}
}*/