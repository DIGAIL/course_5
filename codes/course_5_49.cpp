/*
* algorithm and priblem solving level tow
* problem 49/2 
write a program to print ceil of numbers ,don't use built in ceil function

Code Overview
Extracting the Fractional Part (GetFractionPart):
Subtracts the integer part from the original number to obtain the fractional part.
Custom Ceiling Function (MyCeil):
If the fractional part is greater than 0:
It rounds up for positive numbers.
It keeps the integer part for negative numbers (since ceil only affects positive values).
If the number has no fractional part, it returns the number as is.
User Input Handling (ReadNumber):
Reads a floating-point number from the user.
Program Execution (main):
Calls ReadNumber() to get user input.
Displays the ceiling result using both MyCeil (custom implementation) and ceil (C++ built-in function).
Allows comparison between the custom and built-in ceiling function.


This detailed commentary follows the same style as before. Let me know if you need any modifications! ??

*/

#include <iostream>   // Include iostream for input/output operations.
using namespace std;  // Use the standard namespace to simplify usage of standard functions.

// Function: GetFractionPart
// Purpose: Extracts the fractional part of a floating-point number.
// Parameters:
//   - Number: A floating-point number.
// Returns: The fractional part of the input number.
float GetFractionPart(float Number)
{
    // Subtract the integer part of the number from the original number to get the fractional part.
    return Number - int(Number);
}

// Function: MyCeil
// Purpose: Computes the ceiling value of a floating-point number.
// Parameters:
//   - Number: A floating-point number whose ceiling value is to be determined.
// Returns: The smallest integer greater than or equal to the input number.
int MyCeil(float Number)
{
    // If the number has a fractional part greater than zero, round up if positive.
    if (abs(GetFractionPart(Number)) > 0)
    {
        if (Number > 0)
            return int(Number) + 1;  // Round up for positive numbers.
        else
            return int(Number);  // Keep the integer part for negative numbers.
    }
    else
        return Number;  // If the number is already an integer, return it as is.
}

// Function: ReadNumber
// Purpose: Reads a floating-point number from the user.
// Returns: The number entered by the user.
float ReadNumber()
{
    float Number;  // Variable to store user input.

    // Prompt the user to enter a floating-point number.
    cout << "Please enter a number? ";
    cin >> Number;  // Read input from the user.

    return Number;  // Return the input number.
}

// Main function: Entry point of the program.
int main()
{
    float Number = ReadNumber();  // Read a number from the user.

    // Print the ceiling value using the custom MyCeil function.
    cout << "My MyCeil Result : " << MyCeil(Number) << endl;

    // Print the ceiling value using the built-in ceil function for comparison.
    cout << "C++ ceil Result: " << ceil(Number) << endl;

    return 0;  // Return 0 to indicate successful program execution.
}