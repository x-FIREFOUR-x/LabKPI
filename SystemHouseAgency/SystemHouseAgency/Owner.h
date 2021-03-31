#pragma once
#include"Ad.h"
#include<string>
#include <vector>
#include <iostream>
using namespace std;
class Owner
{
public:
	static bool MyAds(vector<Ad>, string);
	static void AddAds(vector<Ad>&, string);
	static void DeleteAds(vector<Ad>&, string);
	static void ChangeAds(vector<Ad>&, string);
};

