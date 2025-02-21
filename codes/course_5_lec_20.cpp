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
Char GetNumber(EnRandom CharType)
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
Int main()
{
    //seeds the random number generate int c, ++,  called only once
    Srand((unsigned)time(NULL));
    Cout << GetNumber(EnRandom::SmallLetter) << endl;
    Cout << GetNumber(EnRandom::CapitalLetter) << endl;
    Cout << GetNumber(EnRandom::SpecialCharacter) << endl;
    Cout << GetNumber(EnRandom::Digit) << endl;


}


