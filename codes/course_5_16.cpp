/*


Solution Source Code #16:
objectivec
Problem #16

Code Overview
Header Files and Namespace: The code includes <iostream> for I/O operations and <string> to work with strings, and uses the standard namespace.
PrintAllFromAAAtoZZZ Function:
This function uses three nested loops, each iterating over the ASCII values of uppercase letters (from 'A' to 'Z').
The outer loop selects the first letter.
The middle loop selects the second letter.
The inner loop selects the third letter.
For each iteration, a string is built by appending one character from each loop, resulting in a three-letter word (e.g., "AAA", "AAB", ... "ZZZ"). Each generated word is printed immediately, and then the string is reset for the next combination. A separator line is printed after processing all combinations for a given first letter.
Main Function:
The main function calls PrintAllFromAAAtoZZZ to generate and print all the three-letter combinations, then terminates the program.


This detailed commentary should help you understand how the code generates and prints every three-letter combination from "AAA" to "ZZZ".

*/
#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string to work with std::string.
using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

// Function: PrintAllFromAAAtoZZZ
// Purpose: Prints all three-letter combinations from "AAA" to "ZZZ".
//          It uses three nested loops to generate every possible combination of three uppercase letters.
//          After each combination is built, it is printed on a new line.
//          After finishing all combinations for a given first letter, a separator line is printed.
void PrintAllFromAAAtoZZZ()
{
    cout << "\n";  // Print an empty line for formatting.
    string word = "";  // Initialize an empty string to build each three-letter combination.

    // Outer loop: Iterates over ASCII values for uppercase letters (65 'A' to 90 'Z') for the first letter.
    for (int i = 65; i <= 90; i++)
    {
        // Middle loop: Iterates over ASCII values for uppercase letters for the second letter.
        for (int j = 65; j <= 90; j++)
        {
            // Inner loop: Iterates over ASCII values for uppercase letters for the third letter.
            for (int k = 65; k <= 90; k++)
            {
                // Append the current letter for the first position.
                word.append(1, char(i));
                // Append the current letter for the second position.
                word.append(1, char(j));
                // Append the current letter for the third position.
                word.append(1, char(k));

                // Output the constructed three-letter word.
                cout << word << endl;
                // Reset the word string to empty for the next combination.
                word = "";
            }
        }
        // After completing combinations for the current first letter, print a separator line.
        cout << "\n____________________________\n";
    }
}

// Main function: Program entry point.
int main()
{
    // Call the function to print all three-letter combinations from AAA to ZZZ.
    PrintAllFromAAAtoZZZ();

    return 0;  // 