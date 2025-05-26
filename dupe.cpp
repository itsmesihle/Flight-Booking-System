#include <iostream> // Required for input/output operations
#include <string>   // Required for string manipulation (e.g., full name)
#include <limits>   // Required for numeric_limits to clear input buffer

// Function to display the flight schedule menu
void displayFlightMenu()
{
    std::cout << "\n--- Available Flight Times (Johannesburg to Cape Town) ---" << std::endl;
    std::cout << "Travel Duration: 2 hours 30 minutes" << std::endl;
    std::cout << "1. 07:00 - 09:30" << std::endl;
    std::cout << "2. 09:00 - 11:30" << std::endl;
    std::cout << "3. 11:00 - 13:30" << std::endl;
    std::cout << "4. 13:00 - 15:30" << std::endl;
    std::cout << "5. 15:00 - 17:30" << std::endl;
    std::cout << "---------------------------------------------------------" << std::endl;
}

int main()
{
    std::string fullName;    // Variable to store the user's full name
    int preferredTimeChoice; // Variable to store the user's flight time choice

    // Requirement 1: Prompt user to enter full name
    std::cout << "Welcome to the Flight Booking System!" << std::endl;
    std::cout << "Please enter your full name: ";
    std::getline(std::cin, fullName); // Use getline to read the full line including spaces

    std::cout << "\nHello, " << fullName << "!" << std::endl;

    // Requirement 2: Display menu and validate choice
    do
    {
        displayFlightMenu(); // Call the function to display the menu
        std::cout << "Please enter your preferred departure time option (1-5): ";

        // Input validation loop
        while (!(std::cin >> preferredTimeChoice) || preferredTimeChoice < 1 || preferredTimeChoice > 5)
        {
            std::cout << "Invalid input. Please enter a number between 1 and 5: ";
            std::cin.clear(); // Clear error flags
            // Discard invalid input from the buffer
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        // Optional: Confirm selection for the user
        // You could add a switch statement here to display the chosen time
        // For now, we'll just acknowledge the valid input.
        std::cout << "\nYou have selected option " << preferredTimeChoice << "." << std::endl;

    } while (false); // Loop will only run once for this specific part, but good for structure

    // --- Further program logic will go here in subsequent steps ---
    // For example, calculating prices, displaying seats, etc.

    return 0; // Indicate successful program execution
}