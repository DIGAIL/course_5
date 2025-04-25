#include <iostream>
#include <string> 
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
int RandomNumber(int From, int To)
{
    int Random = rand() % (To - From + 1) + From;
    return Random;
}
void FillArrayWithRandomNumberFrom1To100(int Array[100], int &ArrayLength)
{
    ArrayLength = ReadPositiveNumber(" please enter a number to generate a random number ");
    for (int i = 0; i < ArrayLength; i++)
    {
        Array[i] = RandomNumber(1, 100);
    }
    cout << endl;
}
short FindNumberInOrderFromArray(int Number, int Array[100], int ArrayLength)
{
    /*
    this fucntion will search form the number in array and return its index
    or return -1 if the number is not exsits : 
    */

    for (int i = 0; i < ArrayLength; i++)
    {
        if (Array[i] == Number)
            return i;//this will break function and return thr index:
        
    }
    return -1;// if you reached her means ,the number is not founded:
    cout << endl;
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
    //seeds the random number generator int c++ , called only once;
    srand((unsigned)time(NULL));
    int Array[100], ArrayLength;
    FillArrayWithRandomNumberFrom1To100(Array, ArrayLength);
    cout << " array 1 element  " << endl;
    PrintArray(Array, ArrayLength);
    int Number = ReadPositiveNumber(" please enter A number to search for ");
    short NumberPosition = FindNumberInOrderFromArray(Number, Array, ArrayLength);
    if (NumberPosition == -1)
    {
        cout << " the number you are looking for." << Number << endl;
        cout << " No the number is not found ";
    }
    else
    {
        cout << " the number you are looking for " << Number << endl;
        cout << " founded at position " << NumberPosition << endl;
        cout << " the number found after " << NumberPosition + 1 << " times" << endl;
    }
    return 0;
}