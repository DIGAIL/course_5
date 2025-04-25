
/*
* write a program to fill array with max size 100 with random number from  1 to 100 ,then print the count of odd numbers ;
* 
Code Overview
Random Number Generation: The RandomNumber function produces a random integer in the inclusive range [From, To] using the modulus operator.
Array Filling and Printing:
FillArray prompts the user for the number of elements and fills an array with random integers between 1 and 100.
PrintArray outputs each element of the array separated by spaces.
Counting Odd Numbers:
The OddCount function iterates through the array and increments a counter for each odd number, returning the total count.
Program Execution:
In main, the random number generator is seeded, the array is filled and printed, and the count of odd numbers is computed and displayed.


This detailed commentary should help you understand the functionality and structure of the code step by step.*/
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int ReadPositiveNumber(string message)
{
	int Number;
	do
	{
		cout << message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}
int RandomNumber(int From, int To)
{
	int Random = rand() % (From - To + 1) + From;
	return Random;
}
void FillArrayWithRandomNumber(int Array[100], int &ArrayLength)
{
	ArrayLength = ReadPositiveNumber(" please entr number ");
	for (int i = 0; i < ArrayLength; i++)
	{
		Array[i] = RandomNumber(1, 100);
	}
	cout << endl;
}
void PrinArray(int Array[100], int ArrayLength)
{
	for (int i = 0; i < ArrayLength; i++)
	{
		cout << Array[i] << " ";
	}
	cout << endl;
}
int CountOddNumber(int Array[100], int ArrayLength)
{
	int Counter = 0;
	for (int i = 0; i < ArrayLength; i++)
	{
		if (Array[i] % 2 != 0)
		{
			Counter = Array[i];
			Counter++;
		}
	}
	return Counter;
}
int main()
{
	srand((unsigned)time(NULL));
	int Array[100], ArrayLength;
	FillArrayWithRandomNumber(Array, ArrayLength);
	cout << endl;
	cout << " array 1 element " << endl;
	PrinArray(Array, ArrayLength);
	cout << "\n odd number " << endl;
	cout << CountOddNumber(Array, ArrayLength) << endl;
	return 0;//this will return nothing after it
}