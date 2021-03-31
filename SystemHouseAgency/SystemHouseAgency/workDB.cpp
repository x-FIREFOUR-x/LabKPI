#include <vector>
#include <fstream>
#include <string>
#include "Ad.h"
#include "User.h"

void readUsers(std::vector<User>&users)
{
	string s;
	ifstream fin("Users.txt");
	while (!fin.eof())
	{
		string firstName, lastName, phoneNumber, password;
		int next, pos;
		pos = 0;
		next = 0;
		getline(fin, s);
		next = s.find(' ', pos);
		firstName = s.substr(pos, next - pos);
		pos = next + 1;
		next = s.find(' ', pos);
		lastName = s.substr(pos, next - pos);
		pos = next + 1;
		next = s.find(' ', pos);
		phoneNumber = s.substr(pos, next - pos);
		pos = next + 1;
		next = s.find(' ', pos);
		password = s.substr(pos, next - pos);
		pos = next + 1;
		User u(firstName, lastName, phoneNumber, password);
		users.push_back(u);
	}
	fin.close();
}



void writeUsers(std::vector<User>& users)
{
	string s;
	ifstream fout("Users.txt");
	for (int i = 0; i < users.size(); i++)
	{
			
	}
	fout.close();
}