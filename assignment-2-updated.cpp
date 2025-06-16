// Question 3
#include <iostream> // For input/output (e.g., testing in main)
#include <cctype>   // For toupper() to handle case-insensitive size input

// Using the standard namespace for convenience
using namespace std;

// --- Constants for Pizza Pricing (Good practice for readability and easy modification) ---
const double SMALL_PIZZA_BASE_COST = 50.00;
const double SMALL_TOPPING_COST = 5.50;

const double MEDIUM_PIZZA_BASE_COST = 70.00;
const double MEDIUM_TOPPING_COST = 6.50;

// Assumption for Large Pizza (Please modify if you have specific rules)
const double LARGE_PIZZA_BASE_COST = 90.00;
const double LARGE_TOPPING_COST = 7.50;

// Function to compute the cost of the pizza
// Parameters:
//   - size: character indicating pizza size (S, M, L)
//   - toppings: integer indicating the number of toppings
// Returns:
//   - The total cost as a double
//   - 0.0 if an invalid size character is provided
double computePrice(char size, int toppings)
{
    double totalCost = 0.0; // Initialize total cost

    // Convert size to uppercase to handle 's', 'm', 'l' as well
    char upperSize = toupper(size);

    // Use a switch statement to apply pricing rules based on size
    switch (upperSize)
    {
    case 'S': // Small pizza
        totalCost = SMALL_PIZZA_BASE_COST + (toppings * SMALL_TOPPING_COST);
        break;
    case 'M': // Medium pizza
        totalCost = MEDIUM_PIZZA_BASE_COST + (toppings * MEDIUM_TOPPING_COST);
        break;
    case 'L': // Large pizza (based on assumption)
        totalCost = LARGE_PIZZA_BASE_COST + (toppings * LARGE_TOPPING_COST);
        break;
    default: // Handle invalid size input
        cout << "Error: Invalid pizza size entered (" << size << "). Cost cannot be computed." << endl;
        totalCost = 0.0; // Return 0.0 for invalid size
        break;
    }

    // Basic validation for negative toppings (optional, but good for robustness)
    if (toppings < 0)
    {
        cout << "Warning: Negative number of toppings provided. Cost might be unexpected." << endl;
        // You might choose to return 0.0, or handle this error differently.
        // For now, it will compute based on the negative number, which might be desired in some edge cases.
    }

    return totalCost; // Return the calculated total cost
}

int main()
{
    // Test cases
    double cost1 = computePrice('S', 3);                                                           // Small pizza with 3 toppings
    cout << "Cost of Small pizza with 3 toppings: R" << fixed << setprecision(2) << cost1 << endl; // Expected: R50 + (3 * 5.50) = R66.50

    double cost2 = computePrice('M', 5);                                                            // Medium pizza with 5 toppings
    cout << "Cost of Medium pizza with 5 toppings: R" << fixed << setprecision(2) << cost2 << endl; // Expected: R70 + (5 * 6.50) = R102.50

    double cost3 = computePrice('L', 2);                                                           // Large pizza with 2 toppings (using assumption)
    cout << "Cost of Large pizza with 2 toppings: R" << fixed << setprecision(2) << cost3 << endl; // Expected: R90 + (2 * 7.50) = R105.00

    double cost4 = computePrice('X', 1);                                                                 // Invalid size
    cout << "Cost of Invalid size pizza with 1 topping: R" << fixed << setprecision(2) << cost4 << endl; // Expected: Error message and R0.00

    double cost5 = computePrice('s', 0);                                                           // Small pizza with 0 toppings (lowercase size)
    cout << "Cost of Small pizza with 0 toppings: R" << fixed << setprecision(2) << cost5 << endl; // Expected: R50.00

    return 0;
}