#include <iostream>
#include <string>
using namespace std;

// prototype 1
void inputData(string &name, string &addr1, string &addr2, string &postalCode);

// prototype 2
void displayData(string &name, string &addr1, string &addr2, string &postalCode);

int main()
{
    string name, addr1, addr2, PostalCode;
    cout << "---- Enter Postal Address Details ----\n\n";
    inputData(name, addr1, addr2, PostalCode);
    displayData(name, addr1, addr2, PostalCode);
    return 0;
}

void inputData(string &name, string &addr1, string &addr2, string &postalCode)
{
    cout << "Enter your Name: ";
    getline(cin, name);
    cout << "Enter Address Line 1: ";
    getline(cin, addr1);
    cout << "Enter your Address Line 2: ";
    getline(cin, addr2);
    cout << "Enter your Postal Code: ";
    getline(cin, postalCode);
}

void displayData(string &name, string &addr1, string &addr2, string &postalCode)
{
    cout << "\n\n---- Here are your address details ----\n";
    cout << name << endl;
    cout << addr1 << endl;
    cout << addr2 << endl;
    cout << postalCode << endl;
}