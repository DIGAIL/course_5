#include <iostream>
#include <string>
using namespace std;
int ReadNumber(string message)
{
	int Number;
	cout << message << endl;
	cin >> Number;
	return Number;
}
void AddArrayElement(int Number, int Array[100], int &ArrayLength)
{
	ArrayLength++;
	Array[ArrayLength - 1] = Number;
}
void FillArrayWithNumbersFromUser(int Array[100], int &ArrayLength)
{
	bool AddMore = true;
	do
	{
		AddArrayElement(ReadNumber(" please enter a number "), Array, ArrayLength);
		AddMore = ReadNumber(" do you want to add more numbers? [0]NO,[1]YES ");
	} while(AddMore);
	cout << endl;
}
void PrintArrayNumbersFromUser(int Array[100], int ArrayLength)
{
	for (int i = 0; i < ArrayLength; i++)
		cout << Array[i] << " ";
}
int main()
{
	int Array[100], ArrayLength=0;
	FillArrayWithNumbersFromUser(Array,ArrayLength);
	cout << " array element : ";
	PrintArrayNumbersFromUser(Array, ArrayLength);
	return 0;
}