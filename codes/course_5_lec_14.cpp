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
	for (int i = 91 - Number + 1; i >= 91; i++)
	{
		for (int x = 1; x <= Number - (65 + Number - 1 - i); x++)
		{
			cout << char(i);
		}
		cout << endl;
	}
}
int main()
{
	PrintInvertedNumbers(ReadPositiveNumber(" please enter positive number"));
}
=
