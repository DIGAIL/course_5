#include <iostream>
#include <cstdlib>
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
void ReadArray(int Array[100], int& ArrayLength)
{
	cout << " please enter the number of elements :" << endl;
	cin >> ArrayLength;
	cout << " please enter Array element : " << endl;
	for (int i = 0; i < ArrayLength; i++)
	{
		cout << " element [ " << i + 1 << " ] : ";
		cin >> Array[i];
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
int TimeRepeated(int Number, int Array[100], int ArrayLength)
{
	int Counter = 0;
	for (int i = 0; i <= ArrayLength - 1; i++)
	{
		if (Number == Array[i])
		{
			Counter++;
		}
	}
	return Counter;
}
int main()
{
	int Array[100], ArrayLength, NumberToCheck;
	ReadArray(Array, ArrayLength);

	NumberToCheck = ReadPositiveNumber(" please enter number to check : ");

	cout << "\noriginal Array ";
	PrintArray(Array, ArrayLength);

	cout << " number : " << NumberToCheck;
	cout << " repeated ";
	cout << TimeRepeated(NumberToCheck, Array, ArrayLength) << " time(s)";

	return 0;

}
