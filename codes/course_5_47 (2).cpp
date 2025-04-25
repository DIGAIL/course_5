/*
* problem 47/2 algorithm and problem solving level 2 
* write a program to print round of numbers ,don't use built in round function
* 
* input
* -10.3
* output 
-10

Code Overview
Extracting the Fractional Part (GetFractionPart):
Subtracts the integer part from the original number to obtain the fractional part.
Custom Rounding Function (MyRound):
Extracts the integer and fractional parts of the number.
If the fractional part is ? 0.5, it rounds up for positive numbers and rounds down for negative numbers.
If the fractional part is < 0.5, it returns the integer part unchanged.
User Input Handling (ReadNumber):
Reads a floating-point number from the user.
Program Execution (main):
Calls ReadNumber() to get user input.
Displays the rounded result using both MyRound (custom implementation) and round (C++ built-in function).
Allows comparison between the custom and built-in rounding behavior.


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

// Function: MyRound
// Purpose: Rounds a floating-point number to the nearest integer.
// Parameters:
//   - Number: A floating-point number to be rounded.
// Returns: The rounded integer value of the input number.
int MyRound(float Number)
{
    int IntPart;  // Variable to store the integer part of the number.
    IntPart = int(Number);  // Extract the integer part.

    // Compute the fractional part using the GetFractionPart function.
    float FractionsPart = GetFractionPart(Number);

    // If the absolute value of the fractional part is 0.5 or more, round the number accordingly.
    if (abs(FractionsPart) >= 0.5)
    {
        // If the number is positive, round up.
        if (Number > 0)
            return ++IntPart;
        // If the number is negative, round down.
        else
            return --IntPart;
    }
    else
    {
        // If the fractional part is less than 0.5, keep the integer part as is.
        return IntPart;
    }
}

// Function: ReadNumber
// Purpose: Reads a floating-point number from the user.
// Returns: The number entered by the user.
float ReadNumber()
{
    float Number;  // Variable to store user input.

    // Prompt the user to enter a floating-point number.
    cout << "Please enter a float number? ";
    cin >> Number;  // Read input from the user.

    return Number;  // Return the input number.
}

// Main function: Entry point of the program.
int main()
{
    float Number = ReadNumber();  // Read a number from the user.

    // Print the rounded value using the custom MyRound function.
    cout << "My Round Result : " << MyRound(Number) << endl;

    // Print the rounded value using the built-in round function for comparison.
    cout << "C++ Round Result: " << round(Number) << endl;

    return 0;  // Return 0 to indicate successful program execution.
}