#include <iostream>
#include <cstdlib>
using namespace std;
int ReadNumber(string message)
{
	int Number;
	cout << message << endl;
	cin >> Number;
	return Number;
}
int RandomNumber(int From, int To)
{
	int Random = rand() % (To - From + 1) + From;
	return Random;
}
void AddNubmbers(int Array[100], int &ArrayLength)
{
	
	Array[ArrayLength - 1];
}
void FillArrayWithRandomNumbers(int Array[100], int &ArrayLength)
{
	ArrayLength = ReadNumber(" please enter a number of array element ");
	for (int i = 0;i < ArrayLength; i++)
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
int main()
{
	//seeds the random number in c++,only called once
	srand((unsigned)time(NULL));
	int Array[100], ArrayLenght;
	FillArrayWithRandomNumbers(Array, ArrayLenght);
	cout << " array 1 element " << endl;
	PrintArray(Array, ArrayLenght);
	cout << endl;
	AddNubmbers(Array, ArrayLenght);
	cout << " array 2 element after copy " << endl;
	PrintArray(Array, ArrayLenght);
	return 0;
}