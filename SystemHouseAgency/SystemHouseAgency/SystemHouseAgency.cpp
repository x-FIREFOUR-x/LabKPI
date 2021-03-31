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
		int operation;
		cin >> operation;
		cout << endl;
		if (operation == 1)
		{
			User u;
			users.push_back(u);

			cout << "Please, log in to your account" << endl;
			id = User::signIn(users);
		}
		if (operation == 2)
		{
			id = User::signIn(users);
		}
		/*if (operation == 3)
		{
			SearchSystem google;
			google.setFilters();
			User
		}*/
		if (operation == 4)
		{
			exit = true;
			break;
		}

		if (!exit)
		{
			while (true)
			{
				cout << endl << " Input 1 - search house, 2 - list my ads,  3 - create ad, 4 - delete ad, 5 - change ad, 6 - sign out: ";
				cin >> operation;
				cout << endl;
				if (operation == 1)
				{
					SearchSystem google;
					google.setFilters();
					google.search(ads, users[id]);
				}
				if (operation == 2)
				{
					string phone_number = users[id].getPhoneNumber();
					Owner::MyAds(ads, phone_number);
				}
				if (operation == 3)
				{
					string phone_number = users[id].getPhoneNumber();
					Owner::AddAds(ads, phone_number);
				}
				if (operation == 4)
				{
					cout << endl << "My ads:" << endl;
					string phone_number = users[id].getPhoneNumber();
					Owner::MyAds(ads, phone_number);
					
					cout << endl;
					Owner::DeleteAds(ads, phone_number);
				}
				if (operation == 5)
				{
					cout << endl << "My ads:" << endl;
					string phone_number = users[id].getPhoneNumber();
					Owner::MyAds(ads, phone_number);
					
					cout << endl;
					Owner::ChangeAds(ads, phone_number);
				}
				if (operation == 6)
				{
					exit = true;
					break;
				}
			}
		}
		
	}

	writeUsers(users);
	writeAds(ads);

	system("pause");
	return 0;
}