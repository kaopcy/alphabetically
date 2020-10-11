#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string input[10];
	cout << "Enter word" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "word " << i + 1 << " : ";
		getline(cin, input[i]);
	}
	for (int j = 0; j < 9; j++)
	{
		for (int k = j; k < 10; k++)
		{
			if (input[j] > input[k])
			{
				string temp = input[j];
				input[j] = input[k];
				input[k] = temp;
			}
		}
	}
	cout << "alphabetically :" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << input[i] << endl;
	}
}