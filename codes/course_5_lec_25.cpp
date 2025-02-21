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
void FillArrayWithRandomNumber(int Array[100], int &ArrayLength)
{
	ArrayLength = ReadPositiveNumber(" please enter the number of elements : ");
	for (int i = 0; i < ArrayLength; i++)
	{
		Array[i] = RandomNumber(1, 100);
	}
}
void PrintArray(int Array[100],int ArrayLength)
{
	for (int i = 0; i < ArrayLength; i++)
	{
		cout << Array[i] << " ";
	}
}int MaxNum(int Array[100], int ArrayLength)
{
	int Max = 0;
	for (int i = 0; i < ArrayLength; i++)
	{
		if (Array[i] > Max)
		{
			Max = Array[i];
		}
	}
	return Max;
}
int MinNum(int Array[100], int ArrayLength)
{
	int Min = 0;
	Min = Array[0];
	for (int i = 0; i < ArrayLength; i++)
	{
		if(Array[i] < Min)
		{
			Min = Array[i];
		}
	}
	return Min;
}
int main()
{
	srand((unsigned)time(NULL));
	int Array[100],ArrayLength;
	FillArrayWithRandomNumber(Array, ArrayLength);
	
	cout << " Array element : ";
	PrintArray(Array,ArrayLength);
	cout << endl;
	cout << " max number : ";
	cout << MaxNum(Array,ArrayLength);

}