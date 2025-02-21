Generated license keys

#include <iostream>
#include <cstdlib>
Using namespace std;
Enum EnRandom{ SmallLetter = 1,CapitalLetter = 2,SpecialCharacter = 3,Digit = 4 };
Int Randomnumber(int From, int To)
{
    //this function to generate random number ;
    Int Random = rand() % (To - From + 1) + From;
    Return Random;
}
Char GetRandomCharacter(EnRandom CharType)
{
    Switch(CharType)
    {
        Case EnRandom::SmallLetter:
        Return char(Randomnumber(97, 122));
        Break;
        Case EnRandom::CapitalLetter:
        Return char(Randomnumber(65, 90));
        Break;
        Case EnRandom::SpecialCharacter:
        Return char(Randomnumber(33, 47));
        Break;
        Case EnRandom::Digit:
        Return char(Randomnumber(48, 57));
    }
}
Int ReadPositiveNymber(string message)
{
    Int Number;
    Do
    {
      Cout << message << endl;
      Cin >> Number;
    }while (Number <= 0);
    Return Number;
}
String GenerateWord(EnRandom CharType, short length)
{
    String Word;
    For(int I = 1; I <= length; I++)
    {
        Word = Word + GetRandomCharacter(CharType);
    }
    Return Word;
}
String GenerateKey()
{
    String Key = "";
    Key = GenerateWord(EnRandom::CapitalLetter, 4) + " – ";
    Key = Key + GenerateWord(EnRandom::CapitalLetter, 4) + " – ";
    Key = Key + GenerateWord(EnRandom::CapitalLetter, 4) + " – ";
    Key = Key + GenerateWord(EnRandom::CapitalLetter, 4);

    Return Key;
}
Void GenerateKeys(short NumberOfKeys)
{
    For(int I = 1; I <= NumberOfKeys; i++)
    {
        Cout << " generated key [ " << I << " ] : ";
        Cout << GenerateKey() << endl;
    }

}
Int main()
{
    //seeds the random number generate int c, ++,  called only once
    Srand((unsigned)time(NULL));
    GenerateKeys(ReadPositiveNymber(" Please enter how many  keys you want to generate "));


}


