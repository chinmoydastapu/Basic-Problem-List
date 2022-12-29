//Write a program to check whether an alphabet is vowel or consonant using switch case.

#include <iostream>
using namespace std;

int main()
{
    //declaring variable
    char ch;

    //taking a character from user
    cout << "Enter an Alphabet: ";
    cin >> ch;

    cout << endl;

    //checking the inputed character is vowel or consonant
    switch(ch)
    {
        case 'a':
        case 'A':
            cout << ch << " is a Vowel.\n";
            break;

        case 'e':
        case 'E':
            cout << ch << " is a Vowel.";
            break;

        case 'i':
        case 'I':
            cout << ch << " is a Vowel.\n";
            break;

        case 'o':
        case 'O':
            cout << ch << " is a Vowel.\n";
            break;

        case 'u':
        case 'U':
            cout << ch << " is a Vowel.\n";
            break;

        default:
            cout << ch << " is a Consonant.\n";
            break;
    }
    return 0;
}
