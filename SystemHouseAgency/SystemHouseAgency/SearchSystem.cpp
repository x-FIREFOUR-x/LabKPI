#include "SearchSystem.h"
#include <iostream>
#include <string>

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