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
	string phoneNumber;
	int id;
public:
	Ad(string, int, int, string, string);
	string getTitle();
	int getPrice();
	int getArea();
	string getAddress();
	string getPhoneNumber();
	void getInfo();
};

