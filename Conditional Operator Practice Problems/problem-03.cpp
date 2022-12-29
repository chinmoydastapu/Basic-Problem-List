//Write a program to check whether a number is even or odd using conditional operator.

#include<iostream>
using namespace std;

int main()
{
    //declaring variable
    int num;

    //taking input from user
    cout << "Enter an integer: ";
    cin >> num;

    cout << endl;

    //finding even or odd
    (num % 2 == 0) ? cout << num << " is an even number." << endl : cout << num << " is an odd number." << endl;

    return 0;
}
