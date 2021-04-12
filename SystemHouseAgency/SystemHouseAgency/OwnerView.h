#pragma once
#include <iostream>
#include <string>
using namespace std;
class OwnerView
{
public:
	static void showNumber(int);
	static void readParameters(string&, int&, int&, string&);
	static int readNumberAdDelete();
	static int readNumberAdChange();
	static void readNewParameters(string&, string&, string&, string&);
};

