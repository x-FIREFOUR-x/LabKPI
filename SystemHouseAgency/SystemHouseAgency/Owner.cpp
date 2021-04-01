#include "Owner.h"
bool Owner::MyAds(vector<Ad> ads, string phoneNumber)
{
    int n=1;
    bool isAd = false;
    for (int i = 0; i < ads.size(); i++)
    {
        if (ads[i].getPhoneNumber() == phoneNumber)
        {
            cout << n << ":" << endl;
            n++;
            isAd = true;
            ads[i].getInfo();
        }
    }
    return isAd;
}
void Owner::AddAds(vector<Ad>& ads, string phoneNumber)
{
    string title;
    int area;
    int price;
    string address;

    cout << "Input title your ad: ";
    if (cin.peek() == '\n') {
        cin.ignore();
    }
    getline(cin, title);
    cout << "Input area your house: " ;
    cin >> area;
    cout << "Input price your house: ";
    cin >> price;
    cout << "Input address your house (city street number house): ";

    if (cin.peek() == '\n') {
        cin.ignore();
    }
    getline(cin, address);

    Ad ad(title, area, price,  address, phoneNumber);
    ads.push_back(ad);
    
}
void Owner::DeleteAds(vector<Ad>& ads, string phoneNumber)
{
    int numberAd;
    int currentNumberAd = 0;
    cout << "Input number ad, which you want delete: ";
    cin >> numberAd;
    numberAd--;
    for (int i = 0; i < ads.size(); i++)
    {
        if (ads[i].getPhoneNumber() == phoneNumber)
        {
            if (numberAd == currentNumberAd)
            {
                ads.erase(ads.begin() + i);
            }
            else
            {
                currentNumberAd++;
            }
        }
    }
}
void Owner::ChangeAds(vector<Ad>& ads, string phoneNumber)
{
    string title;
    string address;
    string area;
    string price;

    int numberAd;
    int currentNumberAd = 0;
    cout << "Input number ad, which you want change: ";
    cin >> numberAd;
    numberAd--;
    for (int i = 0; i < ads.size(); i++)
    {
        if (ads[i].getPhoneNumber() == phoneNumber)
        {
            if (numberAd == currentNumberAd)
            {
                cout << "Input new title ad(if you don't want change this parameter input -): ";
                if (cin.peek() == '\n') {
                    cin.ignore();
                }
                getline(cin, title);
                cout << "Input new area ad(if you don't want change this parameter input -): ";
                cin >> area;
                cout << "Input new price ad(if you don't want change this parameter input -): ";
                cin >> price;
                cout << "Input new address ad(if you don't want change this parameter input -): ";
                if (cin.peek() == '\n') 
                {
                    cin.ignore();
                }
                getline(cin, address);
                if (title == "-")
                {
                    title = ads[i].getTitle();
                }
                if (area == "-")
                {
                    area = to_string(ads[i].getArea());
                }
                if (price == "-")
                {
                    price = to_string(ads[i].getPrice());
                }
                if (address == "-")
                {
                    address = ads[i].getAddress();
                }
                Ad ad(title, stoi(area), stoi(price), address, phoneNumber);
                ads[i] = ad;
                break;
            }
            else
            {
                currentNumberAd++;
            }
        }
    }
}