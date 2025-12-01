#include <iostream>
using namespace std;

int sum(float a, int b)
{
    cout << "\nUsing function with 2 args" << endl;
    // cout << "\na : " << a;

    return float(a + b);
}

int sum(int a, int b, int c)
{
    cout << "\nUsing function with 3 args" << endl;

    return a + b + c;
}

int main()
{

    int a;

    pow(a, 3);
    cout << "\nThe sum of 3 and 6 is " << sum(3, 6);
    cout << "\nThe sum of 3, 7 and 6 is " << sum(3, 7, 6);

    return 0;
}