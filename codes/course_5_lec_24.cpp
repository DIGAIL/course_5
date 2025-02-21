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
int RandomNumber(int i, int From, int To)
{
	int Random = rand() % (To - From + 1) + From;
	return Random;
}
void PrintArray(int ArrayLength)
{
	cout << " Array element : ";
	for (int i = 0; i < ArrayLength; i++)
	{
		cout << RandomNumber(i, 1, 100) << " ";
	}
	cout << endl;
}

int main()
{
	PrintArray(ReadPositiveNumber(" please enter number of aray element : "));
	return 0;

}