/*
course 5  algorithm and prblem solving (problem 43/2 )
write a program to fill array with max size 100 with random numbers from 1 to 100 ,then print the count of even numbers:

Code Overview
Random Number Generation: The RandomNumber function produces a random integer between a given range by using the modulus operator and adding the lower bound.
Array Filling:
FillArrayWithRandomNumbers asks the user for the number of elements and fills the array with random integers between -100 and 100.
Array Output:
PrintArray prints each element of the array, followed by a space.
Counting Positives:
PositiveCount traverses the array, counts elements that are greater than or equal to zero, and returns the count.
Program Execution:
In main, the random number generator is seeded, the array is filled and printed, and then the count of positive numbers is calculated and displayed.


This detailed commentary should help you understand the code step by step.
*/

#include <iostream>   // Include iostream for input/output operations.
using namespace std;  // Use the standard namespace to simplify usage of standard functions.

// Function: RandomNumber
// Purpose: Generates a random integer within the inclusive range [From, To].
// Parameters:
//   - From: The lower bound of the range.
//   - To: The upper bound of the range.
// Returns: A random integer between From and To.
int RandomNumber(int From, int To)
{
    // rand() % (To - From + 1) yields a number between 0 and (To - From).
    // Adding From shifts the range to [From, To].
    int randNum = rand() % (To - From + 1) + From;
    return randNum;  // Return the generated random number.
}

// Function: FillArray
// Purpose: Fills an integer array with random numbers between 1 and 100.
// Parameters:
//   - arr: An integer array with a maximum capacity of 100.
//   - arrLength: A reference variable that will store the number of elements in the array.
// Behavior: The function prompts the user for the number of elements, then fills each element with a random number.
void FillArray(int arr[100], int& arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;  // Read the number of elements from the user.

    // For each index from 0 to arrLength - 1, generate and assign a random number.
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

// Function: PrintArray
// Purpose: Prints the elements of an integer array separated by spaces.
// Parameters:
//   - arr: The array to be printed.
//   - arrLength: The number of elements in the array.
void PrintArray(int arr[100], int arrLength)
{
    // Loop through the array and output each element followed by a space.
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n";  // Print a newline after printing all elements.
}

// Function: EvenCount
// Purpose: Counts the number of even numbers in an array.
// Parameters:
//   - arr: The array to search.
//   - arrLength: The number of elements in the array.
// Returns: The count of even numbers found in the array.
int EvenCount(int arr[100], int arrLength)
{
    int Counter = 0;  // Initialize counter for even numbers to 0.

    // Loop through each element of the array.
    for (int i = 0; i < arrLength; i++)
    {
        // Check if the current element is even.
        if (arr[i] % 2 == 0)
        {
            Counter++;  // Increment the counter if the element is even.
        }
    }

    return Counter;  // Return the total count of even numbers.
}

// Main function: Program entry point.
int main() {
    // Seed the random number generator with the current time.
    // This ensures that different random sequences are generated each time the program runs.
    srand((unsigned)time(NULL));

    int arr[100];     // Declare an array with a capacity of 100 integers.
    int arrLength;    // Variable to store the number of elements in the array.

    // Fill the array with random numbers between 1 and 100.
    FillArray(arr, arrLength);

    // Print the elements of the array.
    cout << "\nArray Elements: ";
    PrintArray(arr, arrLength);

    // Count the even numbers in the array and print the result.
    cout << "\nEven Numbers count is: ";
    cout << EvenCount(arr, arrLength) << endl;

    return 0;  // Return 0 to indicate successful program execution.
}