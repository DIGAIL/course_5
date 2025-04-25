#include <iostream>
using namespace std;
void FillArray(int Array[100], int &ArrayLength)
{
	ArrayLength = 10;
	Array[0] = 10;
	Array[1] = 20;
	Array[2] = 30;
	Array[3] = 30;
	Array[4] = 50;
	Array[5] = 50;
	Array[6] = 70;
	Array[7] = 70;
	Array[8] = 70;
	Array[9] = 90;
}
int FindNumberPositionInArray(int Number, int Array[100], int ArrayLength)
{
	for (int i = 0; i < ArrayLength; i++)
	{
		if (Array[i] == Number)
		{
			return i;
		}
	}
	return -1;
}
void AddNumbers(int Number, int Array[100], int &ArrayLength)
{
	ArrayLength++;
	Array[ArrayLength - 1] = Number;
}
bool IsNumberInArray(int Number, int Array[100], int ArrayLength)
{
	return (FindNumberPositionInArray(Number, Array, ArrayLength)) != -1;
}
void CopyDistinctNumberInArray(int ArraySource[100], int ArrayDestination[100], int SourceLength, int &DestinationLength)
{
	for (int i = 0; i < SourceLength; i++)
	{
		if (!IsNumberInArray(ArraySource[i], ArrayDestination, DestinationLength))
			AddNumbers(ArraySource[i], ArrayDestination, DestinationLength);
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
	int ArraySource[100], SourceLength = 0, ArrayDestination[100], DestinationLength = 0;
	FillArray(ArraySource, SourceLength);
	cout << " array 1 element " << endl;
	PrintArray(ArraySource, SourceLength);
	CopyDistinctNumberInArray(ArraySource, ArrayDestination, SourceLength, DestinationLength);
	cout << " distinct number " << endl;
	PrintArray(ArrayDestination, DestinationLength);
	return 0;

}