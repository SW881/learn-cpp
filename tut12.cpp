#include <iostream>
using namespace std;

// *************** Pointers ***************

// pointer is data type which holds the address of other data types

int main()
{

    int a = 3;
    int *b = &a;

    cout << "\n The address of a is : " << &a;
    cout << "\n The address of a is : " << b;

    cout << "\n The value of address b is : " << *b;
    /*
        & - Address of operator
        * - Dereference operator (Value at)
    */

    // *************** Pointer to Pointer ***************
    int **c = &b; // int  *(*c) = &b;
    cout << "\n The address of b is " << &b << endl;
    cout << "\n The address of b is " << c << endl;
    cout << "\n The value address of c is " << *c << endl;
    cout << "\n The value address value_at(value_at(c)) is " << **c << endl;

    return 0;
}