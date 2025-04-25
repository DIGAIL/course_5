/*problem 39 from algorithm and problem solving level two .
       write a program to fill array with max size 100 with random numbers from 1 to 100 .
copy only prime numbers to another array using addarrayelement
,and print it on the screen.*/
#include <iostream>
using namespace std;
enum EnPrime{Prime=1,NotPrime=2};
EnPrime CheckPrime(int Number)
{
    int Prime = round(Number / 2);
    for (int i = 2; i < Prime; i++)
    {
        if (Number % i == 0)
            return EnPrime::NotPrime;
    }
    return EnPrime::Prime;
}
int ReadNumber(string message)
{
    int Number;
    cout << message << endl;
    cin >> Number;
    return Number;
}
//function generate random numbers
int RandomNumber(int From, int To)
{
    int Random = rand() % (To - From + 1) + From;//this will generate random numbers from from to to//
    return Random;//returning the result of generating random number;
}//this procedure will copy array element:
void AddNumbers(int Number, int Array[100], int &ArrayLength)
{
    ArrayLength++;
    Array[ArrayLength - 1] = Number;

}
void FillArrayWithRandomNumbers(int Array[100], int &ArrayLength)
{
    ArrayLength = ReadNumber("please enter a number ");
    for (int i = 0; i < ArrayLength; i++)
    {
        Array[i] = RandomNumber(1,100);
    }
    cout << endl;
}
void CopyOnlyPrimeNumbers(int ArraySource[100], int ArrayDestination[100], int ArrayLength, int &ArrayDestinationLength)
{
    for (int i = 0; i < ArrayLength; i++)
        if (CheckPrime(ArraySource[i]) == EnPrime::Prime)
        {
            AddNumbers(ArraySource[i], ArrayDestination, ArrayDestinationLength);
        }
}
void PrintArray(int Array[100], int &ArrayLength)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        cout << Array[i] << " ";
    }
    cout << endl;
    
}
int main()
{
    srand((unsigned)time(NULL));
    int Array[100], ArrayLength=0;
    int Array2[100], Array2Length=0;
    FillArrayWithRandomNumbers(Array, ArrayLength);
    CopyOnlyPrimeNumbers(Array, Array2, ArrayLength, Array2Length);

    cout << " array 1 element " << endl;
    PrintArray(Array, ArrayLength);
    cout << endl;
    cout << " array 2 only prime number " << endl;
    PrintArray(Array2, Array2Length);
    cout << endl;
    return 0;
}