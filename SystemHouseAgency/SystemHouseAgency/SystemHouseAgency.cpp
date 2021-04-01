#include <iostream>
#include <fstream>
#include "workDB.h"
#include "SearchSystem.h"
#include "Owner.h"

using namespace std;

int main()
{
	cout << "Hello" << endl;
	
	vector<Ad> ads;
	vector<User> users;

	readUsers(users);
	readAds(ads);

	bool exit = false;
	int id;
	while (true)
	{
		cout << endl << " Input 1 - sign up, 2 - log in, 3 - search house, 4 - close program: " ;
		string operation;
		cin >> operation;
		cout << endl;
		if (operation == "1")
		{
			User u;
			users.push_back(u);

			cout << "Please, log in to your account" << endl;
			id = User::signIn(users);
			exit = false;
		}
		else
		if (operation == "2")
		{
			id = User::signIn(users);
			exit = false;
		}
		else
		if (operation == "3")
		{
			SearchSystem google;
			google.setFilters();
			google.search(ads);
			exit = true;
		}
		else
		if (operation == "4")
		{
			exit = true;
			break;
		}
		else
		{
			exit = true;
			cout << "Incorrectly selected operation! Try again";
		}

		if (!exit)
		{
			while (true)
			{
				cout << endl << " Input 1 - search house, 2 - list my ads,  3 - create ad, 4 - delete ad, 5 - change ad, 6 - show my favourite ads, 7 - sign out: ";
				cin >> operation;
				cout << endl;
				if (operation == "1")
				{
					SearchSystem google;
					google.setFilters();
					google.search(ads, users[id]);
				}
				else
				if (operation == "2")
				{
					string phone_number = users[id].getPhoneNumber();
					bool isAd = Owner::MyAds(ads, phone_number);
					if (!isAd)
					{
						cout << "You have not ads" << endl;
					}
				}
				else
				if (operation == "3")
				{
					string phone_number = users[id].getPhoneNumber();
					Owner::AddAds(ads, phone_number);
				}
				else
				if (operation == "4")
				{
					cout << "My ads:" << endl;
					string phone_number = users[id].getPhoneNumber();
					bool isAd = Owner::MyAds(ads, phone_number);

					if (!isAd)
					{
						cout << "You can't delete ad, because you have not ad" << endl;
					}
					else
					{
						Owner::DeleteAds(ads, phone_number);
					}
					
				}
				else
				if (operation == "5")
				{
					cout << "My ads:" << endl;
					string phone_number = users[id].getPhoneNumber();
					bool isAd = Owner::MyAds(ads, phone_number);
					
					if (!isAd)
					{
						cout << "You can't change ad, because you have not ad" << endl;
					}
					else
					{
						Owner::ChangeAds(ads, phone_number);
					}
					
				}
				else
				if (operation == "6")
				{
					cout << endl << "My favourite ads:" << endl;
					cout << endl;
					string phone_number = users[id].getPhoneNumber();
					Renter::showFavouriteAds(ads, phone_number);
				}
				else
				if (operation == "7")
				{
					exit = true;
					break;
				}
				else
				{
					cout << "Incorrectly selected operation! Try again";
				}
			}
		}
		
	}

	writeUsers(users);
	writeAds(ads);

	system("pause");
	return 0;
}