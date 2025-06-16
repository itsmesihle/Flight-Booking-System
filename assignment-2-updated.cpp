#include <iostream>
#include <string>
using namespace std;

// prototype 1
void inputOfData(string &name, string &addressLine1, string &addressLine2, string &postalCode);

// prototype 2
void returnData(string &name, string &addressLine1, string &addressLine2, string &postalCode);

int main()
{
    string name, addressLine1, addressLine2, PostalCode;
    cout << "---- Enter Postal Address Details ----\n\n";
    inputOfData(name, addressLine1, addressLine2, PostalCode);
    returnData(name, addressLine1, addressLine2, PostalCode);
    return 0;
}

void inputOfData(string &name, string &addressLine1, string &addressLine2, string &postalCode)
{
    cout << "Enter your Name (e.g. Mr S.M. Ndlovu): ";
    getline(cin, name);
    cout << "Enter Address Line 1 (e.g. P.O. Box 50741): ";
    getline(cin, addressLine1);
    cout << "Enter your Address Line 2 (e.g. Sandton): ";
    getline(cin, addressLine2);
    cout << "Enter your Postal Code (e.g. 3201): ";
    getline(cin, postalCode);
}

void returnData(string &name, string &addressLine1, string &addressLine2, string &postalCode)
{
    cout << "\n\n---- Here are your address details ----\n";
    cout << name << endl;
    cout << addressLine1 << endl;
    cout << addressLine2 << endl;
    cout << postalCode << endl;
    cout << "---- ---- ----" << endl;
}