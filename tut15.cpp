#include <iostream>
using namespace std;

// *************** Functions and Function protoype ***************

// int sum(int a, int b); // -- Acceptable
// int sum(int a, b); // -- Not Acceptable
int sum(int, int); // -- Acceptable (no need to declare variable just type is enough)

int main()
{

    int num1, num2;
    cout << "\n Enter num1 : ";
    cin >> num1;
    cout << "\n Enter num2 : ";
    cin >> num2;

    cout << "\n Sum of numbers is : " << sum(num1, num2);

    return 0;
}

int sum(int a, int b)
{
    return (a + b);
}
