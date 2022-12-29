#include<iostream>

using namespace std;

int main()
{
    //declaring variables
    int angle1, angle2, angle3;

    //taking two angles from user
    cout << "Enter two angles of a triangle: ";
    cin >> angle1 >> angle2;

    cout << endl;

    //finding the third angle
    angle3 = 180 - (angle1 + angle2);

    //printing the third angle
    cout << "Third angle of the triangle is: " << angle3 << endl;

    return 0;
}
