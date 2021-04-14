#include "RenterView.h"
#include<iostream>

using namespace std;

void RenterView::showFavouriteAd(vector<Ad> ads, int i, int k)
{
	cout << k << ":" << endl;
	ads[i].getInfo();
	cout << endl;
}

void RenterView::deleteFavouriteAd(vector<Ad>&ads, vector<User> users, int id)
{
    string number = "";

    bool success = true;

    cout << "Choose ads which you want to delete: ";
    if (cin.peek() == '\n')
    {
        cin.ignore();
    }
    getline(cin, number);

    if (number == "")
    {
        success = false;
    }

    for (int i = 0; i < number.length(); i++)
    {
        if (!isdigit(number[i]))
        {
            success = false;
            break;
        }
    }

    while (!success)
    {
        cout << " !You must put only numbers" << endl;
        cout << "Choose ads which you want to delete: ";
        if (cin.peek() == '\n')
        {
            cin.ignore();
        }
        getline(cin, number);
        success = true;

        if (number == "")
        {
            success = false;
        }

        for (int i = 0; i < number.length(); i++)
        {
            if (!isdigit(number[i]))
            {
                success = false;
                break;
            }
        }

    }
    int k = stoi(number);
   
	Renter::deleteFavouriteAds(ads, users[id].getPhoneNumber(), k - 1);
}