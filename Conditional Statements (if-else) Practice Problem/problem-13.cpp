//Write a program to input angles of a triangle and check whether the triangle is valid or not.

#include<iostream>
using namespace std;

int main()
{
    //declaring variables
    int angle1, angle2, angle3;

    //taking 3 angles from the user
    cout << "Enter three angles of the triangle: ";
    cin >> angle1 >> angle2 >> angle3;

    cout << endl;

    //checking the triangle is valid or not
    if(angle1 + angle2 + angle3 == 180)
        cout << "The triangle is valid." << endl;
    else
        cout << "The triangle is not valid." << endl;

    return 0;
}
