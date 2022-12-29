/*Write a program to check whether the year is
leap year or not using conditional operator.*/

#include <iostream>
using namespace std;

int main()
{
    //declaring variable
	int year;

	//taking input from user
	cout << "Enter a year: ";
	cin >> year;

	//checking leap year or not
	(year % 4 == 0 && year % 100 != 0) ? cout << year << " is a Leap Year" :
 	(year % 400 == 0) ? cout << year << " is a Leap Year" :
	cout << year << " is not a Leap Year";

	return 0;
}
