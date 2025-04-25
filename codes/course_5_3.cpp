/*
Problem #3
Solution Source Code :
objectivec;
Code Overview
Library Inclusions and Namespace: The code starts by including the necessary libraries for input/output and string handling, then uses the standard namespace.
User Input Function:
The ReadPositiveNumber function ensures that the program receives a valid positive number by repeatedly prompting the user until the input is greater than zero.
Perfect Number Evaluation:
The isPerfectNumber function calculates the sum of all proper divisors (numbers less than the given number that divide it evenly). It then checks if this sum equals the original number, thereby determining if the number is perfect.
Output of Perfect Numbers:
The PrintPerfectNumbersFrom1ToN function iterates through all numbers from 1 up to the user-specified limit and prints those that are perfect based on the isPerfectNumber check.
Program Execution:
The main function ties these components together by obtaining the user's input and displaying the perfect numbers within the range.
This detailed commentary should help you understand how each part of the code contributes to identifying and printing perfect numbers.
*/

#include <iostream>   // Include the iostream library for input/output operations
#include <string>     // Include the string library for using std::string
using namespace std;  // Use the standard namespace to avoid prepending std:: to standard functions

// Function: ReadPositiveNumber
// Purpose: Prompts the user to enter a positive number. The function repeatedly asks until the user inputs a number greater than zero.
// Parameters: Message - the prompt message to display to the user.
// Returns: A positive integer input by the user.
int ReadPositiveNumber(string Message)
{
    int Number = 0; // Initialize a variable to store the user's input.
    do
    {
        cout << Message << endl; // Display the prompt message.
        cin >> Number;           // Read the user's input.
    } while (Number <= 0);       // Continue looping until a positive number is entered.

    return Number;             // Return the validated positive number.
}

// Function: isPerfectNumber
// Purpose: Determines if a given number is a perfect number.
// A perfect number is defined as a number that is equal to the sum of its proper divisors (excluding itself).
// Parameters: Number - the integer to check for perfection.
// Returns: true if the number is perfect; false otherwise.
bool isPerfectNumber(int Number)
{
    int Sum = 0; // Initialize the sum of divisors to 0.

    // Loop from 1 to Number - 1 to find all proper divisors.
    for (int i = 1; i < Number; i++)
    {
        // If i divides Number evenly, it is a divisor.
        if (Number % i == 0)
            Sum += i; // Add the divisor to the sum.
    }

    // Compare the sum of divisors to the original number.
    // Return true if they are equal (the number is perfect), or false if they are not.
    return Number == Sum;
}

// Function: PrintResults
// Purpose: Prints whether the provided number is a perfect number.
// Parameters: Number - the integer to check and display the result for.
void PrintResults(int Number)
{
    // Check if the number is perfect using the isPerfectNumber function.
    if (isPerfectNumber(Number))
        cout << Number << " Is Perfect Number.\n";  // If true, print that the number is perfect.
    else
        cout << Number << " Is NOT Perfect Number.\n"; // Otherwise, print that it is not perfect.
}

// Main function: Program entry point.
int main()
{
    // Prompt the user to enter a positive number and then display whether it's a perfect number.
    PrintResults(ReadPositiveNumber("Please enter a positive number?"));

    return 0; // Return 0 to indicate that the program executed successfully.
}