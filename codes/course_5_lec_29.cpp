//Copy only prime number
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
enum EnPrimeNumber { Prime = 1, NotPrime = 2 };
EnPrimeNumber CheckPrime(int Number)
{
	int Prime = round(Number / 2);
	for (int i = 2; i <= Prime; i++)
	{
		if (Number % i == 0)
			return EnPrimeNumber::NotPrime;
	}
	return EnPrimeNumber::Prime;
}
int RandomNumber(int From, int To)
{
	int Random = rand() % (From - To + 1) + From;
	return Random;
}
void FillArrayWithRandomNumber(int Array[100], int& ArrayLength)
{
	ArrayLength = ReadPositiveNumber(" please enter number of array element :");
	for (int i = 0; i < ArrayLength; i++)
	{
		Array[i] = RandomNumber(1, 100);
	}
	cout << endl;
}
void PrintArray(int Array[100], int ArrayLength)
{
	for (int i = 0; i < ArrayLength; i++)
	{
		cout << Array[i] << " ";
	}
	cout << endl;
}
void CopyArray(int ArraySourse[100], int ArrayDestination[100], int ArrayLength, int Array2Length)
{
	int Counter = 0;
	for (int i = 0; i < ArrayLength; i++)
	{
		if (CheckPrime(ArraySourse[i]) == EnPrimeNumber::Prime)
		{
			ArrayDestination[Counter] = ArraySourse[i];
			Counter++;
		}
	}
	Array2Length = --Counter;
}
int main()
{
	srand((unsigned)time(NULL));
	int Array[100], ArrayLength;
	FillArrayWithRandomNumber(Array, ArrayLength);
	int Array2[100], Array2Length = 0;
	CopyArray(Array, Array2, ArrayLength, Array2Length);
	cout << "\n";
	cout << " Array 1 element : ";
	PrintArray(Array, ArrayLength);

	cout << " prime number of array 2 : ";
	PrintArray(Array2, Array2Length);
	return 0;
}
