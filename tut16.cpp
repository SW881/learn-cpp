#include <iostream>
using namespace std;

// * -> access value
// & -> access address

// ********* Call by value & Call by Reference
int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// This will not swap actual variables (Call by value)
void swap(int a, int b) // <- copied variables
{
    cout << "\nInside swap";
    cout << "\nValue before swaping a : " << a << " b : " << b;
    int temp = a;
    a = b;
    b = temp;
    cout << "\nValue before swaping a : " << a << " b : " << b;
}

// Call by Reference using pointers
// Passing the address of variables
void swapPointer(int *a, int *b)
{
    cout << "\nInside swap";
    cout << "\nValue before swaping a : " << *a << " b : " << *b;
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "\nValue before swaping a : " << *a << " b : " << *b;
}

// Call by Reference using C++ way reference variables
void swapRefrenceVar(int &a, int &b)
{
    cout << "\nInside swap";
    cout << "\nValue before swaping a : " << a << " b : " << b;
    int temp = a;
    a = b;
    b = temp;
    cout << "\nValue before swaping a : " << a << " b : " << b;
}

int &swapRefrenceAddress(int &a, int &b)
{
    cout << "\nInside swap";
    cout << "\nValue before swaping a : " << a << " b : " << b;
    int temp = a;
    a = b;
    b = temp;
    cout << "\nValue before swaping a : " << a << " b : " << b;
    return a;
}

int main()
{

    int a = 4, b = 5;
    // cout << "This is sum of : 4 + 5 = " << sum(a, b);
    cout << "\nValue before swaping a : " << a << " b : " << b;
    // swap(a, b); // <- actual variables (call by value)
    // swapPointer(&a, &b); // <- actual variables this will swap using pointer reference (call by reference)
    // swapRefrenceVar(a, b); // <- actual variables this will swap using reference variables (call by reference C++ way)
    // swapRefrenceAddress(a, b) = 800; // &a => 800

    cout << "\nValue before swaping a : " << a << " b : " << b;
    cout << "\nValue before swaping a : " << &a << " b : " << &b;

    return 0;
}