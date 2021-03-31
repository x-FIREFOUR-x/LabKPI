#pragma once
#include<string>
using namespace std;
class Ad
{
private:
	static int CurrentID;
	int area;
	int price;
	string title;
	string address;
	int id;
public:
	Ad(string, int, int, string);
	string getTitle();
	int getPrice();
	int getArea();
	string getAddress();
	/*void SetInfo();
	void Delete1(vector<Ad>, int);
	void GetInfo();
	void MyAds(vector<Ad>);
	void AddAds(vector<Ad>);
	void DeleteAds(vector<Ad>);
	void ChangeAds(vector<Ad>);*/
};

