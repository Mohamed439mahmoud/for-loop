// ConsoleApplication20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
int main()
{
    cout << "please enter number\n";
    cout << "enter number1\n";
    float number1 = 0;
    cin >> number1;

    cout << "enter number2\n";
    float number2 = 0;
    cin >> number2;
    cout << "number1\n";
    cout << "number2\n";
    int sum = number1 + number2;
    cout << "sum\n";

    if (sum%2==0){
        cout << "event\n";
    }
    else{
        cout << "odd\n";
    }
    cout << "total\n";
    int total = 0;
    cin >> total;
    for (int i = 0; i < total; i++)
    {
        cout << "\n" << i;
    }
}

