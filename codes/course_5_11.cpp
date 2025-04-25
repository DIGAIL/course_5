/*


Problem #11

Solution Source Code :
objectivec

Code Overview
Header Files and Namespace: The program includes <iostream> for input/output operations and <string> for string manipulation. It uses the standard namespace.
User Input Function:
The ReadPositiveNumber function ensures a valid positive number is entered by repeatedly prompting the user.
Pattern Printing Function:
The PrintInvertedNumberPattern function prints a pattern where each line contains the current line number printed repeatedly. The pattern starts with the input number and decreases down to 1, creating an inverted (or descending) effect.
Program Execution:
//The main function obtains the user's positive number and then prints the corresponding inverted number pattern.
//This detailed commentary should help you understand the functionality and structure of the code step by step.
*/
#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string to work with std::string.
using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

// Function: ReadPositiveNumber
// Purpose: Prompts the user with a custom message to enter a positive number.
//          It repeatedly asks until the user inputs a number greater than zero.
// Parameter: Message - a string containing the prompt to display.
// Returns: A positive integer entered by the user.
int ReadPositiveNumber(string Message)
{
    int Number = 0;  // Variable to store the user's input.
    do
    {
        cout << Message << endl;  // Display the prompt message.
        cin >> Number;            // Read the number from the user.
    } while (Number <= 0);        // Continue prompting if the number is not positive.

    return Number;  // Return the validated positive number.
}

// Function: ReverseNumber
// Purpose: Reverses the digits of a given number.
//          For example, if the input is 123, the function returns 321.
// Parameter: Number - the positive integer whose digits are to be reversed.
// Returns: The reversed number.
int ReverseNumber(int Number)
{
    int Remainder = 0;  // Variable to store the last digit extracted from the number.
    int Number2 = 0;    // Variable to accumulate the reversed number.

    // Process each digit until the original number becomes 0.
    while (Number > 0)
    {
        Remainder = Number % 10;          // Extract the last digit of Number.
        Number = Number / 10;             // Remove the last digit from Number.
        Number2 = Number2 * 10 + Remainder; // Append the extracted digit to Number2.
    }

    return Number2;  // Return the reversed number.
}

// Function: IsPalindromeNumber
// Purpose: Checks whether a number is a palindrome.
//          A palindrome number is one that remains the same when its digits are reversed.
// Parameter: Number - the positive integer to be checked.
// Returns: true if the number is a palindrome; false otherwise.
bool IsPalindromeNumber(int Number)
{
    // Compare the number with its reversed version.
    return Number == ReverseNumber(Number);
}

// Main function: Program entry point.
int main()
{
    // Prompt the user for a positive number and check if it is a palindrome.
    if (IsPalindromeNumber(ReadPositiveNumber("Please enter a positive number?")))
        cout << "\nYes , it is a Palindrome number.\n";  // If true, print affirmative message.
    else
        cout << "\nNo , it is NOT a Palindrome number.\n"; // Otherwise, print negative message.

    return 0;  // Return 0 to indicate successful program execution.
}