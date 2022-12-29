//Write a program to find the maximum between two numbers using switch case.

#include <iostream>
using namespace std;

int main()
{
    //declaring two variables
	int num1, num2;

	//taking two numbers from user
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;

	cout << endl;

	// Using switch case to find maximum between two numbers
	switch (num1 > num2)
	{
		case 1:
			cout << "Maximum number is: " << num1 << endl;
			break;
		case 0:
			cout << "Maximum number is: " << num2 << endl;
			break;
	}
	return 0;
}
