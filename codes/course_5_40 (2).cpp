#include <iostream>
using namespace std;
int ReadNumber(string message)
{
	int Number;
	cout << message << endl;
	cin >> Number;
	return Number;
}
int RandomNumer(int From, int To)
{
	int Random = rand() % (To - From + 1) + From;
	return Random;
}
void FillArrayWithRandomNumber(int Array[100], int &ArrayLength)
{
	ArrayLength = ReadNumber(" please enter a number ");
	for (int i = 0; i < ArrayLength; i++)
	{
		Array[i] = RandomNumer(1, 100);
	}
	cout << endl;
}
void AddNumbers(int Number, int Array[100], int ArrayLength)
{
	ArrayLength++;
	Array[ArrayLength - 1] = Number;
}
int DistinctNumbers(int ArraySource[100], int &ArrayLength)
{
	 int ArrayDestination[100];
	for (int i = 0; i < ArrayLength; i++)
	{
		
		if (ArraySource[i] == ArrayDestination[i])
		{

		}
		else
		{
			ArrayDestination[i] = ArraySource[i];
		}
		return ArrayDestination[i];
	}
	cout << endl;
}
void CopyOnlyDistinctNumbers(int ArraySource[100], int ArrayDestination[100], int ArrayLength, int& ArrayDestinationLenth)
{
	for (int i = 0; i < ArrayLength; i++)
	{
		AddNumbers(ArraySource[i], ArrayDestination, ArrayDestinationLenth);
	}
}
void PrintArray(int Array[100], int ArrayLength)
{
	for (int i = 0; i < ArrayLength; i++)
	{
		cout << Array[i] << " ";
	}
	cout << "\n";
}
int main()
{
	srand((unsigned)time(NULL));
	int Array[100], ArrayLength = 0;
	int Array2[100], Array2Length = 0;
	FillArrayWithRandomNumber(Array, ArrayLength);
	CopyOnlyDistinctNumbers(Array, Array2, ArrayLength, Array2Length);
	cout << " array 1 element " << endl;
	PrintArray(Array, ArrayLength);
	cout << "\n";
	DistinctNumbers(Array, ArrayLength);
	cout << " array 2 disstinct number " << endl;
	PrintArray(Array2, Array2Length);
	cout << "\n";
	system("pause>0");
	
}