#include "Ad.h"
#include <vector>
#include <iostream>


/*Ad::Ad()
{
    SetInfo();
    id = CurrentID++;
}

void Ad::Delete1(vector<Ad> ads, int id1)
{
    int ind;
    for (int i = 0; i < ads.size(); i++)
        if (ads[i].id == id1)
            ind = i;
    ads.erase(ads.begin() + ind);
}

void Ad::SetInfo()
{
    cout << "Enter area: ";
    cin >> area;
    cout << "Enter price: ";
    cin >> price;
    cout << "Enter adress: ";
    cin >> adress;
}

void Ad::GetInfo()
{
    cout << "INFO:";
    cout << "id: " << id << " area: " << area << " price: " << price << " adress: " << adress << " adress: ";
}

void Ad::MyAds(vector<Ad> ads)
{
    for (int i = 0; i < ads.size(); i++)
    {
        ads[i].GetInfo();
    }
}

void Ad::AddAds(vector<Ad> ads)
{
    while (true)
    {
        Ad ad;
        ads.push_back(ad);
        for(int i = 0; i < ads.size(); i++)
        {
            ads[i].GetInfo();
        }
        cout << "Want to add another ad? (if yes input 1 / no - 0)";
        string s;
        cin >> s;
        if (s == "0")
        {
            break;
        }
    }
}
 void Ad::DeleteAds(vector<Ad> ListOfAds)
{
    while (true)
    {
        cout << "Input id ad for delete: ";
        int p;
        cin >> p ;
        
        Delete1(ListOfAds, p);

        for(int i =0; i < ListOfAds.size(); i++)
        {
            ListOfAds[i].GetInfo();
        }
        cout << "Want delete another ad ? (if yes input 1 / no - 0)";
        string s;
        cin >> s;
        if (s == "0")
        {
            break;
        }
    }
}
 void Ad:: ChangeAds(vector<Ad> ListOfAds)
{
    while (true)
    {
        cout << "Input id ad for delete: ";
        int p;
        cin >> p;
        
        int ind;
        for (int i = 0; i < ListOfAds.size(); i++)
            if (ListOfAds[i].id == p)
                ind = i;
        ListOfAds[ind].SetInfo();

        for (int i = 0; i < ListOfAds.size(); i++)
        {
            ListOfAds[i].GetInfo();
        }

        cout << "Want change another ad ? (if yes input 1 / no - 0)";
        string s;
        cin >> s;
        if (s == "0")
        {
            break;
        }
    }
}

 int Ad::GetArea()
 {
     return area;
 }
 int Ad::GetPrice()
 {
     return price;
 }
 int Ad::GetId()
 {
     return id;
 }
 string Ad::GetName()
 {
     return name;
 }
string Ad::GetAddress()
 {
     return adress;
 }*/