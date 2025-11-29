#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // ************** Constants **************

    // Value can be changed without constants
    // int a = 45;
    // cout << "\na : " << a;
    // a = 30;
    // cout << "\na : " << a;

    // Value can't be changed with constants
    const int b = 24;
    cout << "\nb : " << b;
    // b = 12; // read-only variable error
    cout << "\nb : " << b;

    // ************** Manipulators **************
    int x = 3, y = 95, z = 3434;
    cout << "The value of x is : " << x << endl;
    cout << "The value of y is : " << y << endl;
    cout << "The value of z is : " << z << endl;

    cout << "The value of x is : " << setw(4) << x << endl;
    cout << "The value of y is : " << setw(4) << y << endl;
    cout << "The value of z is : " << setw(4) << z << endl;

    // ************** Operator Precedence **************
    // This is doesn't follows BODMAS it just looks like it follows but it doesn't
    // It flows Precendence if they are same the Associativity
    int a = 3, b = 4;
    int c = a * (5 + b);
    cout << c;
    return 0;
}
