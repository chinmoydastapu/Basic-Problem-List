#include<iostream>
using namespace std;

int main(){

    //declaring variables
    float unit, total_bill;

    //taking unit value from user
    cout << "Enter total units consumed: ";
    cin >> unit;

    //calculating the total bill
    if (unit <= 50)
        total_bill = unit * 0.50;
    else if (unit > 50 && unit <= 150)
        total_bill = (50 * 0.50) + ((unit - 50) * 0.75);
    else if (unit > 150 && unit <= 250)
        total_bill = (50 * 0.50) + (100 * 0.75) + ((unit - 150) * 1.20);
    else
        total_bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((unit - 250) * 1.50);

    cout << endl;


    //printing the total bill
    total_bill = total_bill + (total_bill * 0.20);
    cout << "Total electricity bill is: " << total_bill << endl;

    return 0;
}
