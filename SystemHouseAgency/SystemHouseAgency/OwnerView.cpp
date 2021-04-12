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
    cout << "Input number ad, which you want delete: ";
    cin >> numberAd;
    numberAd--;

    return numberAd;
}

int OwnerView::readNumberAdChange()
{
    int numberAd;
    cout << "Input number ad, which you want change: ";
    cin >> numberAd;
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