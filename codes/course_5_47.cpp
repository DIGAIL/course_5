#include <iostream> //include iostream fro output/input operations;
#include <cmath>
using namespace std;
float ReadNumber(string message)
{
	float Number;
	cout << message << endl;
	cin >> Number;
	return Number;
}
float GetFractionNumber(float Number)
{
	return Number - int(Number);
}
int MyRound(float Number)
{
	int intPart;
	intPart = int(Number);
	float Fraction = GetFractionNumber(Number);
	if (abs(Fraction) >= .5)
	{
		if (Number > 0)
		{
			++intPart;
		}
		else
		{
			--intPart;
		}
	}
	else
		return intPart;
	
}
int main()
{
	float Number = ReadNumber(" please enter number");
	cout << " my round result is " << MyRound(Number) << endl;
	cout << " c++ round reslt is  " << round(Number) << endl;
}