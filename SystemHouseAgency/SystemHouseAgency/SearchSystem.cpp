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
	cout << "Enter minSquare: ";
	cin >> s;
	if (s == "*")
		minSquare = -1;
	else
		minSquare = stoi(s);
	cout << "Enter maxSquare: ";
	cin >> s;
	if (s == "*")
		maxSquare = -1;
	else
		maxSquare = stoi(s);
}

/*void SearchSystem::search(vector<ads> adverts)
{
	vector<ads> result;
	for (int i = 0; i < adverts.size(); i++)
	{
		bool fl = true;
		if (name != "*")
			if (adverts[i].getName().find(name, 0) == adverts[i].getName().npos)
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
		if (minSquare != -1)
			if (adverts[i].getSquare() < minSquare)
				fl = false;
		if (maxPrice != -1)
			if (adverts[i].getSquare() > maxSquare)
				fl = false;

		if (fl)
		{
			result.push_back(adverts[i]);
		}
	}
	for (int i = 0; i < result.size(); i++)
		cout << i << " " << result[i] << endl;
	string s = "";
	while (s != "exit")
	{
		cin >> s;
		result[stoi(s)].getInfo();
	}
}*/