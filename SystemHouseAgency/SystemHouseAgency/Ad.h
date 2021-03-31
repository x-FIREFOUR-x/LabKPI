#pragma once
#include<string>
using namespace std;
class Ad
{
private:
	static int CurrentID;
	int area;
	int price;
	string name;
	string adress;
	int id;
public:
	Ad();
	int GetArea();
	int GetPrice();
	int GetId();
	string GetName();
	string GetAddress();
	void SetInfo();
	void Delete1(vector<Ad>, int);
	void GetInfo();
	void MyAds(vector<Ad>);
	void AddAds(vector<Ad>);
	void DeleteAds(vector<Ad>);
	void ChangeAds(vector<Ad>);
};

