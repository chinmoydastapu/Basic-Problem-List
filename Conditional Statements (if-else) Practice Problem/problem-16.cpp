//Write a program to find CGPA

#include <iostream>
using namespace std;

int main()
{
    int noOfSubjects;
    float marks, totalMarks=0, cgpa;

    // Taking user input for no of subjects
    cout << "Enter the number of subjects: ";
    cin >> noOfSubjects;

    // Taking marks of each subject from user
    for (int i=1; i<=noOfSubjects; i++)
    {
        cout << "Enter marks of subject " << i << ": ";
        cin >> marks;
        totalMarks += marks;
    }

    // Calculate CGPA
    cgpa = totalMarks / noOfSubjects;
    cout << "Your CGPA is: " << cgpa;

    return 0;
}
