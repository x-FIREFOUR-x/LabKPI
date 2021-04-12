#include "Owner.h"
bool Owner::MyAds(vector<Ad> ads, string phoneNumber)
{
    int n=1;
    bool isAd = false;
    for (int i = 0; i < ads.size(); i++)
    {
        if (ads[i].getPhoneNumber() == phoneNumber)
        {
            OwnerView::showNumber(n);
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

    OwnerView::readParameters(title, area, price, address);

    Ad ad(title, area, price,  address, phoneNumber);
    ads.push_back(ad);
    
}
void Owner::DeleteAds(vector<Ad>& ads, string phoneNumber)
{
    int numberAd = OwnerView::readNumberAdDelete();
    int currentNumberAd = 0;
    
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

    int numberAd = OwnerView::readNumberAdChange();
    int currentNumberAd = 0;
    
    for (int i = 0; i < ads.size(); i++)
    {
        if (ads[i].getPhoneNumber() == phoneNumber)
        {
            if (numberAd == currentNumberAd)
            {
                OwnerView::readNewParameters(title, area, price, address);

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