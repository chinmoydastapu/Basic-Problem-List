/*Write a C++ program to input all sides of a triangle and check
whether the triangle is valid or not.*/

#include<iostream>
using namespace std;

int main()
{
    //declaring variables
    float side1, side2, side3;

    // Input three sides of triangle
    cout << "Enter three sides of triangle: ";
    cin >> side1 >> side2 >> side3;

    cout << endl;

    // Check whether triangle is valid or not
    if(side1 + side2 <= side3 || side2 + side3 <= side1 || side1 + side3 <= side2)
    {
        cout << "Triangle is not valid.\n";
    }
    else
    {
        cout << "Triangle is valid.\n";
    }

    return 0;
}
