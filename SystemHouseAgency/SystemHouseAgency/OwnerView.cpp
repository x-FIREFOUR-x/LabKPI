#include "OwnerView.h"
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
    cout << "Input area your house: ";
    cin >> area;
    cout << "Input price your house: ";
    cin >> price;
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
    cout << "Input new area ad(if you don't want change this parameter input -): ";
    cin >> area;
    cout << "Input new price ad(if you don't want change this parameter input -): ";
    cin >> price;
    cout << "Input new address ad(if you don't want change this parameter input -): ";
    if (cin.peek() == '\n')
    {
        cin.ignore();
    }
    getline(cin, address);
    
}