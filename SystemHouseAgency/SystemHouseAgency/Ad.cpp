#include "Ad.h"
#include <vector>
#include <iostream>

Ad::Ad(string title1, int price1, int area1, string address1, string phoneNumber1)
{
    title = title1;
    price = price1;
    area = area1;
    address = address1;
    phoneNumber = phoneNumber1;
}

string Ad::getTitle() 
{ 
    return title; 
}
int Ad::getPrice() 
{ 
    return price; 
}
int Ad::getArea() 
{ 
    return area; 
}
string Ad::getAddress() 
{ 
    return address; 
}
string Ad::getPhoneNumber() 
{ 
    return phoneNumber; 
}
void Ad::getInfo()
{
    cout << "title: " << title << endl;
    cout << " area: " << area << endl;
    cout << " price: " << price << endl;
    cout << " address: " << address << endl;
    cout << " phoneNumber: " << phoneNumber << endl;
}
/*
Ad::Ad()
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



*/