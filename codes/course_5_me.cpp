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
void AddNubmbers(int Number, int Array[100], int &ArrayLength)
{
	ArrayLength++;
	Array[ArrayLength - 1] = Number;
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
void CopyArrayElementUsingAddNumber(int ArraySourse[100], int ArrayDestination[100], int ArrayLength, int& ArrayDestinationLength)
{
	for (int i = 0; i < ArrayLength; i++)
	{
		if (ArraySourse[i] % 2 == 0)//this will see if ArrayLength / 2 = 0 or not   
		{
			//here if arraylength / 2 = 0 return nothing will go to else statement
		}
		else
		{
			
			AddNubmbers(ArraySourse[i], ArrayDestination, ArrayDestinationLength);
		}
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
int main()
{
	//seeds the random number in c++,only called once
	srand((unsigned)time(NULL));
	int Array[100], ArrayLength=0, Array2Length = 0;
	FillArrayWithRandomNumbers(Array, ArrayLength);
	int Array2[100];
	CopyArrayElementUsingAddNumber(Array, Array2, ArrayLength, Array2Length);
	cout << " array 1 element " << endl;
	PrintArray(Array, ArrayLength);
	cout << endl;
	cout << " array 2 element after copy " << endl;
	PrintArray(Array2, Array2Length);
	return 0;
}