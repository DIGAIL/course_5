/*
problem #50
Solution Source Code :
objectivec


Code Overview
Custom Square Root Function (MySqrt):
Uses pow(Number, 0.5) to compute the square root.
Equivalent to sqrt(Number) but uses exponentiation.
User Input Handling (ReadNumber):
Reads a floating-point number from the user.
Program Execution (main):
Calls ReadNumber() to get user input.
//Displays the square root using both MySqrt (custom implementation) and sqrt (C++ built-in function).
//Allows comparison between the custom and built-in square root function.


//This detailed commentary follows the same style as before. Let me know if you need any modifications! ??
*/

#include <iostream>   // Include iostream for input/output operations.
#include <cmath>      // Include cmath for mathematical functions like sqrt and pow.
using namespace std;  // Use the standard namespace to simplify usage of standard functions.

// Function: MySqrt
// Purpose: Computes the square root of a given number using the pow function.
// Parameters:
//   - Number: A floating-point number whose square root is to be determined.
// Returns: The square root of the input number.
float MySqrt(float Number)
{
    return pow(Number, 0.5);  // Compute the square root using the power function.
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

    // Print the square root result using the custom MySqrt function.
    cout << "My MySqrt Result : " << MySqrt(Number) << endl;

    // Print the square root result using the built-in sqrt function for comparison.
    cout << "C++ sqrt Result: " << sqrt(Number) << endl;

    return 0;  // Return 0 to indicate successful program execution.
}