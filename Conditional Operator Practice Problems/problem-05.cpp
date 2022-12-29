//Write a program to check whether a character is an alphabet or not using conditional operator.

#include <iostream>
using namespace std;

int main()
{
    //declaring variable
    char ch;

    //taking character from user
    cout << "Enter a character: ";
    cin >> ch;

    cout << endl;

    //checking alphabet or not
    (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ?
        cout << ch << " is an Alphabet." << endl : cout << ch << " is not an Alphabet." << endl;
    return 0;
}
