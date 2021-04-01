#pragma once
#include<string>
#include<vector>
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
	vector<string> likedUsers;
public:
	Ad(string, int, int, string, string);
	Ad(string, int, int, string, string, vector<string>);
	string getTitle();
	int getPrice();
	int getArea();
	string getAddress();
	string getPhoneNumber();
	void getInfo();
	vector<string> getLikedUsers();
	void setLikedUsers(vector<string>);
};

