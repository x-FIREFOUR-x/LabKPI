#include "OwnerView.h"

using namespace std;

void OwnerView::showNumber(int n)
{
	cout << n << ":" << endl;
}
void OwnerView::readParameters(string& title, int& area, int& price, string& address)
{
    cout << "Input title your ad: ";
    if (cin.peek() == '\n') {
        cin.ignore();
    }
    getline(cin, title);
    string s;
    bool success;
    success = false;
    while (!success)
    {
        cout << "Input area your house: ";
        s = "";
        if (cin.peek() == '\n') {
            cin.ignore();
        }
        getline(cin, s);
        bool fl = true;
        if (s != "")
        {
            for (int i = 0; i < s.length(); i++)
                if (!isdigit(s[i]))
                    fl = false;
        }
        else
            fl = false;
        if (fl)
        {
            area = stoi(s);
            success = true;
        }
        else
        {
            cout << " !You must put only numbers" << endl;
        }
    }
    success = false;
    while (!success)
    {
        cout << "Input price your house: ";
        s = "";
        if (cin.peek() == '\n') {
            cin.ignore();
        }
        getline(cin, s);
        bool fl = true;
        if (s != "")
        {
            for (int i = 0; i < s.length(); i++)
                if (!isdigit(s[i]))
                    fl = false;
        }
        else
            fl = false;
        if (fl)
        {
            price = stoi(s);
            success = true;
        }
        else
        {
            cout << " !You must put only numbers" << endl;
        }
    }
    cout << "Input address your house (city street number house): ";

    if (cin.peek() == '\n') {
        cin.ignore();
    }
    getline(cin, address);
}

int OwnerView::readNumberAdDelete()
{
    int numberAd;
    string number = "" ;

    bool success = true;

    cout << "Input number ad, which you want delete: ";
    if (cin.peek() == '\n')
    {
        cin.ignore();
    }
    getline(cin, number);

    if (number == "")
    {
        success = false;
    }

    for (int i = 0; i < number.length(); i++)
    {
        if (!isdigit(number[i]))
        {
            success = false;
            break;
        }
    }

    while (!success)
    {
        cout << " !You must put only numbers" << endl;
        cout << "Input number ad, which you want delete: ";
        if (cin.peek() == '\n')
        {
            cin.ignore();
        }
        getline(cin, number);
        success = true;

        if (number == "")
        {
            success = false;
        }

        for (int i = 0; i < number.length(); i++)
        {
            if (!isdigit(number[i]))
            {
                success = false;
                break;
            }
        }
        
    }
    numberAd = stoi(number);
    numberAd--;

    return numberAd;
}

int OwnerView::readNumberAdChange()
{
    int numberAd;
    string number = "";

    bool success = true;

    cout << "Input number ad, which you want change: ";
    if (cin.peek() == '\n')
    {
        cin.ignore();
    }
    getline(cin, number);
    success = true;

    if (number == "")
    {
        success = false;
    }

    for (int i = 0; i < number.length(); i++)
    {
        if (!isdigit(number[i]))
        {
            success = false;
            break;
        }
    }

    while (!success)
    {
        cout << " !You must put only numbers" << endl;
        cout << "Input number ad, which you want change: ";
        if (cin.peek() == '\n')
        {
            cin.ignore();
        }
        getline(cin, number);
        success = true;

        if (number == "")
        {
            success = false;
        }

        for (int i = 0; i < number.length(); i++)
        {
            if (!isdigit(number[i]))
            {
                success = false;
                break;
            }
        }

    }
    numberAd = stoi(number);
    numberAd--;

    return numberAd;
}

void OwnerView::readNewParameters(string& title, string& area, string& price, string& address)
{
    cout << "Input new title ad(if you don't want change this parameter input -): ";
    if (cin.peek() == '\n') {
        cin.ignore();
    }
    getline(cin, title);
    string s;
    bool success;
    success = false;
    while (!success)
    {
        cout << "Input new area ad(if you don't want change this parameter input -): ";
        s = "";
        if (cin.peek() == '\n') {
            cin.ignore();
        }
        getline(cin, s);
        bool fl = true;
        if (s != "")
        {
            for (int i = 0; i < s.length(); i++)
                if (!isdigit(s[i]))
                    fl = false;
        }
        else
            fl = false;
        if (s == "-")
            fl = true;
        if (fl)
        {
            area = s;
            success = true;
        }
        else
        {
            cout << " !You must put only numbers" << endl;
        }
    }
    success = false;
    while (!success)
    {
        cout << "Input new price ad(if you don't want change this parameter input -): ";
        s = "";
        if (cin.peek() == '\n') {
            cin.ignore();
        }
        getline(cin, s);
        bool fl = true;
        if (s != "")
        {
            for (int i = 0; i < s.length(); i++)
                if (!isdigit(s[i]))
                    fl = false;
        }
        else
            fl = false;
        if (s == "-")
            fl = true;
        if (fl)
        {
            price = s;
            success = true;
        }
        else
        {
            cout << " !You must put only numbers" << endl;
        }
    }
    cout << "Input new address ad(if you don't want change this parameter input -): ";
    if (cin.peek() == '\n')
    {
        cin.ignore();
    }
    getline(cin, address);
    
}