//Write a program to check whether a number is positive, negative or zero using switch case.

#include<iostream>

using namespace std;

int main()
{
    //declaring a variable
    int num;

    //taking a number from user
    cout << "Enter a number: ";
    cin >> num;

    //checking the number is positive, negative or zero using switch case
    switch (num) {
    case 0:
        cout << "Number is zero";
        break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
        cout << "Number is positive";
        break;
    case -1:
    case -2:
    case -3:
    case -4:
    case -5:
    case -6:
    case -7:
    case -8:
    case -9:
        cout << "Number is negative";
        break;
    default:
        cout << "Number is neither positive nor negative";
    }
}
