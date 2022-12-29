#include<iostream>

using namespace std;

int main()
{
    int n;

    //Taking n input from user
    cout << "Enter a number: ";
    cin >> n;

    //Printing 1 to n
    for(int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }

    return 0;
}
