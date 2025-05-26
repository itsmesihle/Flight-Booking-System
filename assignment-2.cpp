#include <iostream>
#include <string>
#include <iomanip> //new library
#include <limits>  //required for numeric limts in validation
using namespace std;

// make Menu a function instead to remove repetition
void displayFlightMenu()
{
    cout << "The available travel times for flights are: " << endl;
    cout << left << setw(9) << "\nOption" << setw(12) << "Departure" << setw(12) << "Arrival" << endl;
    // cout << "----------------------------" << endl; // visual separator
    cout << left << setw(8) << "1." << setw(12) << "07:00" << setw(12) << "09:30" << endl;
    cout << left << setw(8) << "2." << setw(12) << "09:00" << setw(12) << "11:30" << endl;
    cout << left << setw(8) << "3." << setw(12) << "11:00" << setw(12) << "13:30" << endl;
    cout << left << setw(8) << "4." << setw(12) << "13:00" << setw(12) << "15:30" << endl;
    cout << left << setw(8) << "5." << setw(12) << "15:00" << setw(12) << "17:30" << endl;
}
void displayAvailableSeats()
{
    cout << "First Class (R1920) " << endl;
    cout << "|A1|A2|A3|-----|A4|A5|A6|" << endl;
    cout << "|B1|B2|B3|-----|B4|B5|B6|" << endl;
    cout << "|C1|C2|C3|-----|C4|C5|C6|" << endl;
    cout << "Economy Class (R1600)" << endl;
    cout << "|D1|D2|D3|-----|D4|D5|D6|" << endl;
    cout << "|E1|E2|E3|-----|E4|E5|E6|" << endl;
    cout << "|F1|F2|F3|-----|F4|F5|F6|" << endl;
    cout << "|I1|I2|" << endl
         << endl;
}
int main()
{
    // 1. prompt user to input their full name
    string fullName;
    int preferredDepartureTime;
    cout << "\nPlease enter your full name: ";
    getline(cin, fullName);
    cout << "\n"
         << fullName << ", welcome to the COS1511 Flight Booking System" << endl
         << endl;
    // 2. display a menu showing the available times for the flight. Then validate the selected time
    do
    {
        displayFlightMenu();
        cout << "\nPlease choose a departure time by entering the option number from the above displayed list [1-5]: ";

        // CHECKING THE OPTION SELECTED
        while (!(cin >> preferredDepartureTime) || preferredDepartureTime < 1 || preferredDepartureTime > 5)
        {
            cout << "Invalid input. Please enter number between 1 and 5: ";
            // new stuff and headers, dont quite understand fully yet...but its basically to clear the error flags, and to ignore the remaining input
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cout << "You have selected option " << preferredDepartureTime << endl
             << endl;
    } while (false); // (false) ensures that the displayFlightMenu() and cout << will only be executed once

    // seat selection
    cout << "The available seats for flight option " << preferredDepartureTime << " are as follows: " << endl
         << endl;
    displayAvailableSeats();
    cout << "Please key in a seat number to choose a seat(A2): " << endl;
    return 0;
}
