//Write a program to find the grade of a subject (University grade)

#include <iostream>
using namespace std;

int main()
{
    //declaring variables
    float marks;

    //taking marks from user
    cout << "Enter your marks: ";
    cin >> marks;

    cout << endl;

    //printing the obtained grade
    switch((int)marks/10)
    {
        case 10:
        case 9:
            cout << "Grade A+(Golden)" << endl;
            break;
        case 8:
            cout << "Grade A+" << endl;
            break;
        case 7:
            cout << "Grade A" << endl;
            break;
        case 6:
            cout << "Grade A-" << endl;
            break;
        case 5:
            cout << "Grade B" << endl;
            break;
        case 4:
            cout << "Grade C" << endl;
            break;
        case 3:
            cout << "Grade D" << endl;
            break;
        default:
            cout << "Grade F" << endl;
            break;
    }
    return 0;
}
