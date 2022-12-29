//Write a program to find the maximum between three numbers using conditional operator.

#include <iostream>
using namespace std;

int main()
{
    //declaring variables
    int num1, num2, num3;

    //taking input from user
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    cout << endl;

    //finding the max number
    int max = (num1 > num2) ? ( (num1 > num3) ? num1 : num3) : ( (num2 > num3) ? num2 : num3);

    //printing the max number
    cout << "The maximum of the three numbers is: " << max << endl;
    return 0;
}
