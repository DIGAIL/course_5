/*


Problem #8

Solution Source Code :
objectivec

Code Overview
Header and Namespace: The program starts by including <iostream> for I/O operations and using the standard namespace.
User Input:
The ReadPositiveNumber function continuously prompts the user until a valid positive number is entered.
Counting Digit Frequency:
The CountDigitFrequency function extracts digits from the number using modulo and division, counting how many times the specified digit occurs.
Printing Frequencies:
The PrintAllDigitsFrequencey function loops through digits 0 to 9, calling CountDigitFrequency for each, and prints the frequency if the digit appears at least once.
Program Execution:
The main function ties everything together by obtaining user input and printing the frequency of each digit in the entered number.


This detailed commentary should help you understand how each part of the code works step by step.
*/
#include <iostream>   // Include the iostream library for input/output operations.
using namespace std;  // Use the standard namespace to simplify access to standard functions.

// Function: ReadPositiveNumber
// Purpose: Prompts the user with a custom message to enter a positive number.
//          Continues to prompt until the user enters a number greater than zero.
// Parameter: Message - a string containing the prompt message.
// Returns: A positive integer entered by the user.
int ReadPositiveNumber(string Message)
{
    int Number = 0;  // Variable to store the user's input.
    do
    {
        cout << Message << endl;  // Display the prompt message.
        cin >> Number;            // Read the user's input.
    } while (Number <= 0);        // Repeat if the number is not positive.

    return Number;  // Return the valid positive number.
}

// Function: CountDigitFrequency
// Purpose: Counts how many times a specific digit appears in a given number.
//          It does so by extracting each digit of the number and comparing it to the digit to check.
// Parameters:
//   - DigitToCheck: The digit (as a short) to look for within the number.
//   - Number: The main number in which to count the frequency of DigitToCheck.
// Returns: An integer representing the number of times DigitToCheck appears in Number.
int CountDigitFrequency(short DigitToCheck, int Number)
{
    int FreqCount = 0;   // Initialize the frequency counter to zero.
    int Remainder = 0;   // Variable to store the digit extracted from the number.

    // Process each digit of Number until there are no digits left.
    while (Number > 0)
    {
        Remainder = Number % 10;  // Extract the last digit of Number.
        Number = Number / 10;     // Remove the last digit from Number.

        // If the extracted digit matches the digit to check, increment the counter.
        if (DigitToCheck == Remainder)
        {
            FreqCount++;
        }
    }
    return FreqCount;  // Return the total count of matching digits.
}

// Main function: Entry point of the program.
int main()
{
    // Prompt the user to enter the main number in which to count digit frequency.
    int Number = ReadPositiveNumber("Please enter the main number?");
    // Prompt the user to enter a digit whose frequency is to be checked.
    // Although the function returns an int, it is stored in a short variable as we expect a single digit.
    short DigitToCheck = ReadPositiveNumber("Please enter one digit to check?");

    // Display the result: the frequency of the specified digit within the main number.
    cout << "\nDigit " << DigitToCheck << " Frequency is "
        << CountDigitFrequency(DigitToCheck, Number) << " Time(s).\n";

    return 0;  // Return 0 to indicate successful program execution.
}