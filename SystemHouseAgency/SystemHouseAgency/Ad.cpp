#include "Ad.h"
#include <vector>
#include <iostream>

using namespace std;

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
    cout << "Enter area";
    cin >> area;
    cout << "Enter price";
    cin >> price;
    cout << "Enter adress";
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

void AddAds(vector<Ad> ads)
{
    while (true)
    {
        Ad ad;
        ads.push_back(ad);
        for(int i = 0; i < ads.size(); i++)
        {
            ads[i].GetInfo();
        }
        cout << "Хотите добавить еще? 1/0";
        string s;
        cin >> s;
        if (s == "0")
        {
            break;
        }
    }
}
public static void DeleteAds(List<Ads> ListOfAds)
{
    while (true)
    {
        Console.Write("Индекс для удаления: ");
        int p = int.Parse(Console.ReadLine());
        Ads.Delete(ListOfAds, p);
        foreach(var ad1 in ListOfAds)
        {
            ad1.GetInfo();
        }
        Console.WriteLine("Хотите delete eshe? 1/0");
        if (Console.ReadLine() == "0")
        {
            break;
        }
    }
}
public static void ChangeAds(List<Ads> ListOfAds)
{
    while (true)
    {
        Console.WriteLine("Индекс для изменения: ");
        int p = int.Parse(Console.ReadLine());
        ListOfAds[ListOfAds.FindIndex(x = > x.id == p)].SetInfo();
        foreach(var ad1 in ListOfAds)
        {
            ad1.GetInfo();
        }
        Console.WriteLine("Хотите change eshe? 1/0");
        if (Console.ReadLine() == "0")
        {
            break;
        }
    }
}