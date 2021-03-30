#pragma once
#include<string>
class Ad
{
private:
	static int CurrentID;
	int area;
	int price;
	std::string adress;
	int id;
public:
	Ad();
	void SetInfo();
	void Delete(vector<Ad>, int);
	void GetInfo();
};

