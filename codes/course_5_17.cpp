#include <iostream>
using namespace std;
string ReadPassword()
{
	string Password = "";
	cout << " please enter password" << endl;
	cin >> Password;
	return Password;
}
bool GuessNumber(string OriginalPassword)
{
	string Word = "";
	int Counter = 0;
	for (int i = 65; i <= 90; i++)
	{
		for (int x = 65; x <= 90; x++)
		{
			for (int y = 65; y <= 90; y++)
			{
				Word = Word + char(i);
				Word = Word + char(x);
				Word = Word + char(y);
				Counter++;
				cout << " Trial [" << Counter << "] :";
				cout << Word << "\n";
				if (Word == OriginalPassword)
				{
					cout << "\n\n\n";
					cout << " password is " << Word;
					cout << " found after " << Counter << " times(s) ";
					cout << "\n\n";
					return true;
				}

				Word = "";
			}
		}
	}
	return false;
}
int main()
{
	GuessNumber(ReadPassword());
	return 0;
}
