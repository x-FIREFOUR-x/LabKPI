#include "SearchSystemView.h"
#include <iostream>

using namespace std;

SearchSystemView::SearchSystemView()
{
	string s;
	bool success;
	cout << "Put '*' if you dont want to fill the field\n";
	cout << "Enter title: ";
	if (cin.peek() == '\n') {
		cin.ignore();
	}
	getline(cin, title);
	success = false;
	while (!success)
	{
		cout << "Enter minPrice: ";
		cin >> s;
		if (s == "*")
		{
			minPrice = -1;
			success = true;
		}
		else
		{
			bool fl = true;
			for (int i = 0; i < s.length(); i++)
				if (!isdigit(s[i]))
					fl = false;
			if (fl)
			{
				minPrice = stoi(s);
				success = true;
			}
			else
			{
				cout << " !You must put only numbers" << endl;
			}
		}
	}
	success = false;
	while (!success)
	{
		cout << "Enter maxPrice: ";
		cin >> s;
		if (s == "*")
		{
			maxPrice = -1;
			success = true;
		}
		else
		{
			bool fl = true;
			for (int i = 0; i < s.length(); i++)
				if (!isdigit(s[i]))
					fl = false;
			if (fl)
			{
				maxPrice = stoi(s);
				success = true;
			}
			else
			{
				cout << " !You must put only numbers" << endl;
			}
		}
	}
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
	success = false;
	while (!success)
	{
		cout << "Enter minArea: ";
		cin >> s;
		if (s == "*")
		{
			minArea = -1;
			success = true;
		}
		else
		{
			bool fl = true;
			for (int i = 0; i < s.length(); i++)
				if (!isdigit(s[i]))
					fl = false;
			if (fl)
			{
				minArea = stoi(s);
				success = true;
			}
			else
			{
				cout << " !You must put only numbers" << endl;
			}
		}
	}
	success = false;
	while (!success)
	{
		cout << "Enter maxArea: ";
		cin >> s;
		if (s == "*")
		{
			maxArea = -1;
			success = true;
		}
		else
		{
			bool fl = true;
			for (int i = 0; i < s.length(); i++)
				if (!isdigit(s[i]))
					fl = false;
			if (fl)
			{
				maxArea = stoi(s);
				success = true;
			}
			else
			{
				cout << " !You must put only numbers" << endl;
			}
		}
	}
}

void SearchSystemView::showResults(vector<Ad> ads)
{
	vector<int> results;
	SearchSystem google(title, minPrice, maxPrice, city, street, house, minArea, maxArea);
	results = google.search(ads);
	for (int i = 0; i < results.size(); i++)
	{
		cout << endl;
		cout << i + 1 << ":" << endl;
		ads[results[i]].getInfo();
	}
}

void SearchSystemView::showResults(vector<Ad>& ads, User user)
{
	vector<int> results;
	SearchSystem google(title, minPrice, maxPrice, city, street, house, minArea, maxArea);
	results = google.search(ads);
	for (int i = 0; i < results.size(); i++)
	{
		cout << endl;
		cout << i + 1 << ":" << endl;
		ads[results[i]].getInfo();
	}
	bool success = false;
	while (!success)
	{
		cout << endl << "Enter numbers of houses, which you want to add to favourites: ";
		string s = "";
		if (cin.peek() == '\n') {
			cin.ignore();
		}
		getline(cin, s);
		if (!google.pushToLiked(ads, results, user, s))
			cout << " !Put only numbers from the list" << endl;
		else
		{
			cout << "Successfully" << endl << endl;
			success = true;
		}
	}
}