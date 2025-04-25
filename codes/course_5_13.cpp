/*

Problem #13

Solution Source Code :
objectivec

Code Overview
Header Files and Namespace: The program includes <iostream> for I/O and <string> for string manipulation. It uses the standard namespace to simplify function calls.
User Input Function:
ReadPositiveNumber repeatedly prompts the user until a valid positive number is entered.
Inverted Letter Pattern Function:
PrintInvertedLetterPattern prints a pattern of uppercase letters in inverted form:
The outer loop sets the letter to print, starting from the letter with ASCII code (65 + Number - 1) down to 'A' (65).
The inner loop prints the current letter a specific number of times, which decreases by one in each row. The calculation Number - ((65 + Number - 1) - i) determines the count, starting from Number and decreasing to 1.
Program Execution:
//The main function gets a positive number from the user and prints the corresponding inverted letter pattern.
//This detailed commentary should help you understand each part of the code and how it works to generate the inverted letter pattern.

*/



#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string to use std::string.
using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

// Function: ReadPositiveNumber
// Purpose: Prompts the user with a custom message to enter a positive number.
//          It repeatedly asks until the user inputs a number greater than zero.
// Parameter: Message - a string containing the prompt to display.
// Returns: A positive integer provided by the user.
int ReadPositiveNumber(string Message)
{
    int Number = 0;  // Variable to store the user's input.
    do
    {
        cout << Message << endl;  // Display the prompt message.
        cin >> Number;            // Read the number entered by the user.
    } while (Number <= 0);        // Continue prompting if the number is not positive.

    return Number;  // Return the validated positive number.
}

// Function: PrintNumberPattern
// Purpose: Prints a number pattern where each line prints the line number repeated as many times as the line number.
//          The pattern is fixed to 5 lines, regardless of the input parameter.
// Parameter: Number -  intended to be the basis for pattern size.
void PrintNumberPattern(int Number)
{
    cout << "\n";  // Print an empty line for formatting.

    // Outer loop: Iterates from 1 to 5, representing each line of the pattern.
    for (int i = 1; i <= Number; i++)
    {
        // Inner loop: Prints the current number 'i' exactly 'i' times.
        for (int j = 1; j <= i; j++)
        {
            cout << i;  // Print the number i without any separator.
        }
        cout << "\n";  // Move to the next line after printing the current line's pattern.
    }
}

// Main function: Program entry point.
int main()
{
    // Prompt the user to enter a positive number (though it is not used in the pattern)
    // and then call PrintNumberPattern to print the number pattern.
    PrintNumberPattern(ReadPositiveNumber("Please enter a positive number?"));

    return 0;  // Return 0 to indicate successful program execution.
}
Code Overview