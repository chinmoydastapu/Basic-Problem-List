//Write a program to check whether the triangle is equilateral, isosceles or scalene triangle.

#include <iostream>
using namespace std;

int main()
{
    //declaring variables
	float side1, side2, side3;

	//taking the three sides of the triangle from user
	cout << "Enter the three sides of the triangle: ";
	cin >> side1 >> side2 >> side3;

	cout << endl;

	//Check whether the triangle is equilateral, isosceles or scalene
	if (side1 == side2 && side2 == side3)
		cout << "The triangle is equilateral." << endl;
	else if (side1 == side2 || side2 == side3 || side1 == side3)
		cout << "The triangle is isosceles." << endl;
	else
		cout << "The triangle is scalene." << endl;

	return 0;
}
