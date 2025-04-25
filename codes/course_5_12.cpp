/*
problem #12
objectivec 
Code Overview
Header Files and Namespace: The code includes <iostream> and <string> for input/output and string manipulation, and uses the standard namespace.
User Input Function:
The ReadPositiveNumber function ensures that the user inputs a positive number by repeatedly prompting until a valid number is entered.
Pattern Printing Function:
The PrintNumberPattern function prints a dynamic pattern of numbers over N lines. For each line i, the digit i is printed i times.
Program Execution:
The main function calls ReadPositiveNumber to obtain user input and then calls PrintNumberPattern to display the number pattern.


This detailed commentary should help you understand each part of the code and how it works.

*/


#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string to work with std::string.
using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

// Function: ReadPositiveNumber
// Purpose: Prompts the user with a custom message to enter a positive number.
//          It continues to prompt until the user inputs a number greater than zero.
// Parameter: Message - a string containing the prompt message to be displayed.
// Returns: A positive integer entered by the user.
int ReadPositiveNumber(string Message)
{
    int Number = 0;  // Variable to store the user's input.
    do
    {
        cout << Message << endl;  // Display the prompt message.
        cin >> Number;            // Read the number entered by the user.
    } while (Number <= 0);        // Repeat if the number is not positive.

    return Number;  // Return the validated positive number.
}

// Function: PrintInvertedNumberPattern
// Purpose: Prints an inverted number pattern where each line prints a sequence of digits.
//          The first line prints the given number repeated that many times, the next line prints one less, and so on.
// Parameter: Number - the starting number and the maximum count of digits to print in the first line.
void PrintInvertedNumberPattern(int Number)
{
    cout << "\n";  // Print an empty line for formatting.

    // Outer loop: Starts from the given number and decrements to 1.
    for (int i = Number; i >= 1; i--)
    {
        // Inner loop: Prints the current number 'i' repeatedly.
        // It runs from 1 up to the current value of 'i'.
        for (int j = 1; j <= i; j++)
        {
            cout << i;  // Print the digit 'i' without a space.
        }

        cout << "\n";  // After printing one line, move to the next line.
    }
}

// Main function: Program entry point.
int main()
{
    // Read a positive number from the user and pass it to the PrintInvertedNumberPattern function.
    PrintInvertedNumberPattern(ReadPositiveNumber("Please enter a positive number?"));

    return 0;  // Return 0 to indicate successful execution.