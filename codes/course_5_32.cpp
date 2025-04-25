#include <iostream>
#include <string>
using namespace std;
enum enCharType {
	SamallLetter = 1, CapitalLetter = 2,
	SpecialCharacter = 3, Digit = 4
};
int ReadPositiveNumber(string message)
{
	int Number;
	do
	{
		cout << messsage << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}
int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
char GetRandomCharacter(enCharType CharType)
{
	switch (CharType)
	{
	case enCharType::SamallLetter:
	{
		return char(RandomNumber(97, 122));
		break;
	}
	case enCharType::CapitalLetter:
	{
		return char(RandomNumber(65, 90));
		break;
	}
	case enCharType::SpecialCharacter:
	{
		return char(RandomNumber(33, 47));
		break;
	}
	case enCharType::Digit:
	{
		return char(RandomNumber(48, 57));
		break;
	}
	}
}
/*
ProgrammingAdvices.com
© Copyright 2022
Problem # 21 / 2 Solution Using C++
*/
string GenerateWord(enCharType CharType, short Length)
{
	string Word;
	for (int i = 1; i <= Length; i++)
	{
		Word = Word + GetRandomCharacter(CharType);
	}
	return Word;
}
string GenerateKey()
{
	string Key = "";
	Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4);
	return Key
}
void ReadnumberofKeys()
{
	int NUmber = ReadPositiveNumber(" please enter how many keys do you want to generate ?");
	for (int i = 1; i <= NUmber; i++)
	{
		cout << GenerateKey();
	}
}
int main()
{
	ReadnumberofKeys();
}