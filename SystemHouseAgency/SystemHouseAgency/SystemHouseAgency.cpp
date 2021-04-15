#include <iostream>
#include <fstream>
#include "workDB.h"
#include "SearchSystemView.h"
#include "Owner.h"
#include "UserView.h"
#include "RenterView.h"

using namespace std;

int main()
{
	cout << "Hello in System House Agency" << endl ;
	
	vector<Ad> ads;
	vector<User> users;

	readUsers(users);
	readAds(ads);

	bool exit = false;
	int id;
	while (true)
	{
		cout << "\tMain menu:" << endl;
		cout << "\t1 - sign up" << endl;
		cout << "\t2 - log in" << endl;
		cout << "\t3 - search house" << endl;
		cout << "\t4 - close program" << endl;
		cout << "\tInput number: ";
		
		string operation;
		cin >> operation;
		cout << endl;
		if (operation == "1")
		{
			system("cls");

			vector<string> phoneNumbers = createPhoneNumbers(users);
			UserView U;
			User u = U.signUpView(phoneNumbers);
			users.push_back(u);

			writeUsers(users);

			cout << endl << "Please, log in to your account" << endl;
			id = UserView::signInView(users);
			exit = false;

			system("pause");
		}
		else
		if (operation == "2")
		{
			system("cls");

			id = UserView::signInView(users);
			exit = false;

			system("pause");
		}
		else
		if (operation == "3")
		{
			system("cls");

			SearchSystemView googleView;
			googleView.showResults(ads);
			exit = true;
			system("pause");
		}
		else
		if (operation == "4")
		{
			system("cls");

			exit = true;
			break;
		}
		else
		{
			system("cls");

			exit = true;
			cout << " !Incorrectly selected operation! Try again" << endl;
			system("pause");
		}
		writeUsers(users);

		if (!exit)
		{
			while (true)
			{
				system("cls");

				cout << "\tUser menu:" << endl;
				cout << "\t1 - search house " << endl;
				cout << "\t2 - list my ads" << endl;
				cout << "\t3 - create ad" << endl;
				cout << "\t4 - delete ad" << endl;
				cout << "\t5 - change ad" << endl;  
				cout << "\t6 - show my favourite ads" << endl;
				cout << "\t7 - delete favourite ad" << endl;
				cout << "\t8 - Change your profile " << endl;
				cout << "\t9 - sign out " << endl;
				cout << "\tInput number: ";

				cin >> operation;
				cout << endl;
				if (operation == "1")
				{
					system("cls");

					SearchSystemView googleView;
					googleView.showResults(ads, users[id]);

					system("pause");
				}
				else
				if (operation == "2")
				{
					system("cls");

					cout << "My ads:" << endl;
					string phone_number = users[id].getPhoneNumber();
					bool isAd = Owner::MyAds(ads, phone_number);
					if (!isAd)
					{
						cout << " You have not ads" << endl ;
					}
					cout << endl;

					system("pause");
				}
				else
				if (operation == "3")
				{
					system("cls");

					string phone_number = users[id].getPhoneNumber();
					Owner::AddAds(ads, phone_number);
					cout << " Your ad was successfully created" << endl << endl;

					system("pause");
				}
				else
				if (operation == "4")
				{
					system("cls");

					cout << "My ads:" << endl;
					string phone_number = users[id].getPhoneNumber();
					bool isAd = Owner::MyAds(ads, phone_number);

					if (!isAd)
					{
						cout << endl << " You can't delete ad, because you have not ad" << endl;
					}
					else
					{
						Owner::DeleteAds(ads, phone_number);
						cout << " Your ad was successfully delete" << endl << endl;
					}

					system("pause");
					
				}
				else
				if (operation == "5")
				{
					system("cls");

					cout << "My ads:" << endl;
					string phone_number = users[id].getPhoneNumber();
					bool isAd = Owner::MyAds(ads, phone_number);
					
					if (!isAd)
					{
						cout << endl << " You can't change ad, because you have not ad" << endl;
					}
					else
					{
						Owner::ChangeAds(ads, phone_number);
						cout << " Your ad was successfully change" << endl << endl;
					}

					system("pause");
					
				}
				else
				if (operation == "6")
				{
					system("cls");

					bool fl;
					cout << "My favourite ads:" << endl;
					string phone_number = users[id].getPhoneNumber();
					fl = Renter::showFavouriteAds(ads, phone_number);
					if (!fl)
					{
						cout << " You have no favourite ads" << endl << endl;
					}

					system("pause");
				}
				else
				if (operation == "7")
				{
					system("cls");

					bool fl;
					cout << "My favourite ads:" << endl;
					string phone_number = users[id].getPhoneNumber();
					fl = Renter::showFavouriteAds(ads, phone_number);
					if (fl)
					{
						RenterView::deleteFavouriteAd(ads, users, id);
						cout << " Your favourite ad was successfully delete" << endl << endl;
					}
					else
						cout << endl << " You can't delete favourite ad, because you have not favourite ads" << endl;

					system("pause");
				}
				else
				if (operation == "8")
				{
					system("cls");

					users[id].changeProfile();

					system("pause");
				}
				else
				if (operation == "9")
				{
					system("cls");

					exit = true;
					break;
				}
				else
				{
					system("cls");
					cout << " !Incorrectly selected operation! Try again" << endl;

					system("pause");
				}

				writeAds(ads);
				writeUsers(users);
			}
		}
		system("cls");
	}

	writeUsers(users);
	writeAds(ads);

	system("pause");
	return 0;
}