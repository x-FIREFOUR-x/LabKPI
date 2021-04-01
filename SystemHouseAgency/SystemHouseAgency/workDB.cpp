#pragma once
#include <vector>
#include <fstream>
#include <string>
#include "User.h"
#include "Ad.h"
#include <iostream>

void readUsers(std::vector<User>&users)
{
	string s;
	ifstream fin("Database\\Users.txt");
	while (!fin.eof())
	{
		string firstName, lastName, phoneNumber, password;
		int next, pos;
		pos = 0;
		next = 0;
		getline(fin, s);
		if (s != "")
		{
			next = s.find(' ', pos);
			firstName = s.substr(pos, next - pos);
			pos = next + 1;
			next = s.find(' ', pos);
			lastName = s.substr(pos, next - pos);
			pos = next + 1;
			next = s.find(' ', pos);
			phoneNumber = s.substr(pos, next - pos);
			pos = next + 1;
			next = s.find(' ', pos);
			password = s.substr(pos, next - pos);
			pos = next + 1;
			User u(firstName, lastName, phoneNumber, password);
			users.push_back(u);
		}
	}
	fin.close();
}



void writeUsers(std::vector<User>& users)
{
	string s;
	ofstream fout("DataBase\\Users.txt");
	for (int i = 0; i < users.size(); i++)
	{
		s = users[i].getFirstName() + " " + users[i].getLastName() + " " + users[i].getPhoneNumber() + " " + users[i].getPassword() + "\n";
		fout << s;
	}
	fout.close();
}

void readAds(std::vector<Ad>& ads)
{
	string s;
	ifstream fin("Database\\Ads.txt");
	while (!fin.eof())
	{
		
		string title;
		int price, area;
		string address;
		string phoneNumber;
		int next, pos;
		pos = 0;
		next = 0;
		getline(fin, s);
		if (s != "")
		{
			vector<string> likedUsers;
			next = s.find(' ', pos);
			title = s.substr(pos, next - pos);
			string title1 = "";
			for (int i = 0; i < title.length(); i++)
			{
				if (title[i] == '_')
					title[i] = ' ';
			}
			pos = next + 1;
			next = s.find(' ', pos);
			price = stoi(s.substr(pos, next - pos));
			pos = next + 1;
			next = s.find(' ', pos);
			area = stoi(s.substr(pos, next - pos));
			pos = next + 1;
			next = s.find('+', pos);
			address = s.substr(pos, next - pos - 1);
			pos = next;
			next = s.find(' ', pos);
			phoneNumber = s.substr(pos, next - pos);
			pos = next + 1;
			while (next != s.npos)
			{
				next = s.find(' ', pos);
				likedUsers.push_back(s.substr(pos, next - pos));
				pos = next + 1;
			}
			Ad a(title, price, area, address, phoneNumber, likedUsers);
			ads.push_back(a);
		}
	}
	fin.close();
}

void writeAds(std::vector<Ad>& ads)
{
	string s;
	ofstream fout("DataBase\\Ads.txt");
	for (int i = 0; i < ads.size(); i++)
	{
		int next = 0, pos = 0;
		string title;
		title = ads[i].getTitle();
		for (int i = 0; i < title.length(); i++)
		{
			if (title[i] == ' ')
				title[i] = '_';
		}
		s = title + " " + to_string(ads[i].getPrice()) + " " + to_string(ads[i].getArea()) + " " + ads[i].getAddress() + " " + ads[i].getPhoneNumber();
		vector<string> likedUsers = ads[i].getLikedUsers();
		for (int j = 0; j < likedUsers.size(); j++)
			s = s + " " + likedUsers[j];
		s = s + "\n";
		fout << s;
	}
	fout.close();
}

vector<string> createPhoneNumbers(vector<User> users)
{
	vector<string> phoneNumbers;
	for (int i = 0; i < users.size(); i++)
	{
		string phoneN = users[i].getPhoneNumber();
		phoneNumbers.push_back(phoneN);
	}
	return phoneNumbers;
}