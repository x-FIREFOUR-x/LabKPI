#include "SearchSystem.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

SearchSystem::SearchSystem(string title1, int minPrice1, int maxPrice1, string city1, string street1, string house1, int minArea1, int maxArea1)
{
	title = title1;
	minPrice = minPrice1;
	maxPrice = maxPrice1;
	city = city1;
	street = street1;
	house = house1;
	minArea = minArea1;
	maxArea = maxArea1;
}

vector<int> SearchSystem::search(vector<Ad> adverts)
{
	vector<int> result;
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
			result.push_back(i);
		}
	}
	return result;
}

bool SearchSystem::pushToLiked(vector<Ad>&adverts, vector<int> result, User user, string s)
{
	if (s != "-")
	{
		int next = 0, pos = 0;
		while (next != s.npos)
		{
			next = s.find(' ', pos);
			bool success = false;
			int k;
			//int k = stoi(s.substr(pos, next - pos)) - 1;
			string s1 = s.substr(pos, next - pos);
			while (!success)
			{
				bool fl = true;
				if (s1 != "")
				{
					for (int i = 0; i < s1.length(); i++)
						if (!isdigit(s1[i]))
							fl = false;
				}
				else
					fl = false;
				if (fl)
				{
					k = stoi(s1) - 1;
					if ((k > 0) && (k < result.size()))
						success = true;
					else
					{
						return false;
					}
				}
				else
				{
					return false;
				}
			}
			pos = next + 1;
			Renter::addToLiked(adverts[result[k]], user.getPhoneNumber());
		}
	}
}