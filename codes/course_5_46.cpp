/*
problem 46/2 course 5  algorithm and prblem solvin
write a program to print abs of numbers ,don't use built int abs function 

Code Overview
Custom Absolute Function (MyABS):
Implements a simple logic to return the absolute value of a floating-point number.
If the number is negative, it multiplies by -1 to make it positive.
If the number is already positive or zero, it returns the number as is.
User Input (ReadNumber):
Reads a floating-point number from the user and returns it.
Main Function Execution:
Calls ReadNumber() to get user input.
Prints the absolute value using both MyABS (custom implementation) and abs (C++ built-in function).
Helps compare the custom function's behavior with the built-in function.

*/
#include <iostream>   // Include iostream for input/output operations.
using namespace std;  // Use the standard namespace to simplify usage of standard functions.

// Function: MyABS
// Purpose: Computes the absolute value of a floating-point number.
// Parameters:
//   - Number: A floating-point number whose absolute value is to be determined.
// Returns: The absolute value of the input number.
float MyABS(float Number)
{
    // If the number is positive or zero, return it as is.
    if (Number > 0)
        return Number;
    else
        return Number * -1;  // If negative, multiply by -1 to make it positive.
}

// Function: ReadNumber
// Purpose: Reads a floating-point number from the user.
// Returns: The number entered by the user.
float ReadNumber()
{
    float Number;  // Variable to store user input.

    // Prompt the user to enter a number.
    cout << "Please enter a number? ";
    cin >> Number;  // Read input from the user.

    return Number;  // Return the input number.
}

// Main function: Entry point of the program.
int main()
{
    float Number = ReadNumber();  // Read a number from the user.

    // Print the absolute value using the custom MyABS function.
    cout << "My abs Result : " << MyABS(Number) << endl;

    // Print the absolute value using the built-in abs function.
    cout << "C++ abs Result: " << abs(Number) << endl;

    return 0;  // Return 0 to indicate successful program execution.
}