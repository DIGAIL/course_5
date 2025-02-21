#include <iostream>
#include <string>
using namespace std;
string ReadText()
{
	string Text;
	cout << " please enter Text\n";
	getline(cin, Text);
	return Text;
}
string EcriptText(string Text, short EncriptionKey)
{
	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)Text[i] + EncriptionKey);
	}
	return Text;
}
string DecriptText(string Text, short EncriptionKey)
{
	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)Text[i] - EncriptionKey);
	}
	return Text;
}
int main()
{
	const short EncriptionKey = 2;//this is the key of encription

	string TextAfterEncription, TextAfterDecription;
	string Text = ReadText();
	TextAfterEncription = EcriptText(Text, EncriptionKey);
	TextAfterDecription = DecriptText(TextAfterEncription, EncriptionKey);

	cout << "\n text before encription : ";
	cout << Text << endl;
	cout << " text after encripyion : ";
	cout << TextAfterEncription << endl;
	cout << " text after decription : ";
	cout << TextAfterDecription << endl;
	return 0;

}
