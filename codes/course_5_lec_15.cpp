#include <iostream>
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
void PrintInvertedNumbers(int Number)
{
	for (int i = 0; i <= Number; i++)
	{
		for (int x = 0; x <= i; x++)
		{
			cout << char('A' + i);
		}
		cout << endl;
	}
}
int main()
{
	PrintInvertedNumbers(ReadPositiveNumber(" please enter positive number"));
}

