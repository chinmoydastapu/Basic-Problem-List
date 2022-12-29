//Write a program to create a Simple Calculator using switch case.

#include <iostream>
using namespace std;

int main()
{
    //declaring variables
    char op;
    float num1, num2;

    //taking a arithmetic operator from the user
    cout << "Enter any operator either '+' or '-' or '*' or '/': ";
    cin >> op;

    //taking two numbers from user
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << endl;

    //doing arithmetic operation
    switch (op)
    {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;

        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            break;

        default:
            cout << "Error! operator is not correct";
            break;
    }

    return 0;
}
