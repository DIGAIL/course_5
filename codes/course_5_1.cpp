/* Solution Source Code :
* Overview of the Code
Header Inclusions & Namespace:The code includes the iostream and string libraries to enable input/output and string handling. Using the standard namespace simplifies the code by allowing direct access to standard library functions.
Enum Definition:
An enumeration (enPrimNotPrime) is defined to distinguish between prime and non-prime numbers. This improves code clarity by using meaningful names rather than numeric literals.
Reading User Input:
The ReadPositiveNumber function continuously prompts the user until a positive number is provided. This ensures that the rest of the program operates with valid input.
Prime Check Logic:
The CheckPrime function checks divisibility from 2 to half the input number. If any number divides the input evenly, it returns NotPrime; otherwise, it returns Prime.
Printing Primes:
The PrintPrimeNumbersFrom1ToN function displays a header and then iterates through all numbers from 1 to the provided input, printing only the prime numbers based on the result of CheckPrime.
Program Execution:
The main function ties everything together by first reading a positive number and then printing the prime numbers within the specified range.
This detailed commentary should help clarify the purpose and operation of each part of the code.
objectivec
*/
#include <iostream>   // Include the iostream library for input/output operations
using namespace std;  // Use the standard namespace to avoid using the "std::" prefix

// Function: PrintTableHeader
// Purpose: Prints the header of the multiplication table, including the title and column labels.
void PrintTableHeader()
{
    // Print the title of the table with some formatting (new lines and tab spaces)
    cout << "\n\n\t\t\t Multiplication Table From 1 to 10\n\n";

    // Print a tab to align the column headers correctly
    cout << "\t";

    // Loop from 1 to 10 to print the column numbers for the header
    for (int i = 1; i <= 10; i++)
    {
        // Print the current number followed by a tab for spacing
        cout << i << "\t";
    }

    // Print a separator line to visually divide the header from the rest of the table
    cout << "\n_\n";
}

// Function: ColumSperator
// Purpose: Returns a string that acts as a separator between the row number and the multiplication values.
//          The spacing is adjusted based on whether the row number is a single-digit (less than 10) or not.
string ColumSperator(int i)
{
    // If the row number is less than 10, return a separator with three spaces before the pipe symbol
    if (i < 10)
        return "   |";
    else
        // For numbers 10 or greater, return a separator with two spaces before the pipe symbol
        return "  |";
}

// Function: PrintMultiplicationTable
// Purpose: Combines the header and the multiplication logic to print the full multiplication table.
void PrintMultiplicationTable()
{
    // First, print the header with the title and column numbers
    PrintTableHeader();

    // Loop through the rows of the multiplication table (from 1 to 10)
    for (int i = 1; i <= 10; i++)
    {
        // Print the row number, then a formatted column separator, and a tab for spacing
        cout << " " << i << ColumSperator(i) << "\t";

        // Inner loop to calculate and print the product for each column (from 1 to 10)
        for (int j = 1; j <= 10; j++)
        {
            // Calculate the product of the current row and column, then print it with a tab for spacing
            cout << i * j << "\t";
        }
        // After finishing one row, move to the next line
        cout << endl;
    }
}

// Main function: Program entry point
int main()
{
    // Call the function to print the multiplication table
    PrintMultiplicationTable();

    // Return 0 to indicate successful program execution
    return 0;
}