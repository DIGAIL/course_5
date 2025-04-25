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