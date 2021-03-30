#include "Ad.h"
#include <vector>
#include <iostream>

using namespace std;

Ad::Ad()
{
    SetInfo();
    id = CurrentID++;
}

void Ad::Delete(vector<Ad> ads, int id1)
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
void GetInfo()
{
    cout << "INFO:";
    cout << "area: " << area << "price: " << price << "area: " << area << "area: " << area <<
    Console.WriteLine($"area: {area} price: {price} adress: {adress} id: {id}");
}
public static void MyAds(List<Ads> List)
{
    foreach(var ad in List)
    {
        ad.GetInfo();
    }
}
public static void AddAds(List<Ads> ListOfAds)
{
    while (true)
    {
        Ads ad = new Ads();
        ListOfAds.Add(ad);
        foreach(var ad1 in ListOfAds)
        {
            ad1.GetInfo();
        }
        Console.WriteLine("Хотите добавить еще? 1/0");
        if (Console.ReadLine() == "0")
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