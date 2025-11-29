#include <iostream>

using namespace std;

/*
    Types of header files
    1. System header files: It comes with complier
    2. User defined header files (like imports in js)
*/

int main()
{
    int a = 10, b = 20;
    cout << "\nOperators in c++" << endl;
    cout << "\nFollowing types of Arithmetic operators";
    // Arithmetic opertors
    cout << "\nThe value of a + b : " << a + b;
    cout << "\nThe value of a - b : " << a - b;
    cout << "\nThe value of a * b : " << a * b;
    cout << "\nThe value of a / b : " << a / b;
    cout << "\nThe value of a % b : " << a % b;
    cout << "\nThe value of a++ : " << a++; // becomes 11 but doesn't update while showing 10
    cout << "\nThe value of a-- : " << a--; // becomes 10 but doesn't update while showing 11
    cout << "\nThe value of ++a : " << ++a; // becomes 10 but doesn't update while showing 11
    cout << "\nThe value of --a : " << --a; // becomes 11 but doesn't update while showing 10

    // Assignment opertaor - Simply assign the value
    int i = 3, j = 9;

    // Comparison operator
    cout << "\n\nFollowing types of Comparison operators";
    cout << "\nThe value of a == b : " << (a == b);
    cout << "\nThe value of a != b : " << (a != b);
    cout << "\nThe value of a >= b : " << (a >= b);
    cout << "\nThe value of a <= b : " << (a <= b);
    cout << "\nThe value of a > b : " << (a > b);
    cout << "\nThe value of a < b : " << (a < b);

    // Logical operator
    cout << "\n\nFollowing types of Logical operators";
    cout << "\nThe value of ((a == b) && (a < b)) : " << ((a == b) && (a < b));
    cout << "\nThe value of ((a == b) || (a < b)) : " << ((a == b) || (a < b));

    return 0;
}
