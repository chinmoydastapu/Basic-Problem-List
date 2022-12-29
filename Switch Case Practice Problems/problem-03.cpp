#include<iostream>

using namespace std;

int main()
{
    //declaring a variable
    int num;

    //taking input from user
    cout << "Enter a number: ";
    cin >> num;

    cout << endl;

    //checking the number is odd or even using switch case
    switch(num % 2)
    {
    case 0:
        cout << num << " is an even number" << endl;
        break;
    case 1:
        cout << num << " is an odd number" << endl;
        break;
    default:
        cout << "Invalid number\n";
        break;
    }

    return 0;
}
