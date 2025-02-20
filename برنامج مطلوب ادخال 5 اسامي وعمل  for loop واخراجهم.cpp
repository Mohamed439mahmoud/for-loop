// ConsoleApplication70.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
int main()
{
	string names[5];
	for (int  i = 0; i < 5; i++)
	{
		cout << "enter 5 names\n";
		cin >> names[i];
	}
	for (int i = 0; i < 5; i++)
	{
		cout << names[i] << "\n";
	}
}

