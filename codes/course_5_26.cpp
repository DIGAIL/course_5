#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int ReadPositiveNumber(string message)
{
	int Number;
	do {
		cout << message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}
int RandomNumber(int From, int To)
{
	int Random = rand() % (To - From + 1) + From;
	return Random;
}
void FillArrayElementWithRandomNumber(int Array[100], int &ArrayLength)
{
	ArrayLength = ReadPositiveNumber(" please enter number of array element ");
	cout << endl;
	for (int i = 0; i < ArrayLength; i++)
	{
		Array[i] = RandomNumber(1, 100);
	}
}
void PrintArray(int Array[100], int ArrayLength)
{
	for (int i = 0; i < ArrayLength; i++)
	{
		cout << Array[i] << " ";
	}
	cout << endl;
}
int SunRandomNumbers(int Array[100], int Arraylength)
{
	int Sum = 0;
	for (int i = 0; i < Arraylength; i++)
	{
		Sum = Sum + Array[i];
	}
	return Sum;
}
int main()
{
	int Array[100], ArrayLength;
	FillArrayElementWithRandomNumber(Array, ArrayLength);

	cout << " array element : ";
	PrintArray(Array,ArrayLength);
	
	cout << " sum of array elements is ";
	cout << SunRandomNumbers(Array, ArrayLength);
	return 0;
}