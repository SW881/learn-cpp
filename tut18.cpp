#include <iostream>

using namespace std;

// ************ Recursions & Recursive funcitons ************

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return (n * factorial(n - 1));
    }
}

int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    else
    {
        return (fib(n - 2) + fib(n - 1));
    }
}

int main()
{
    // Factorial of number
    // 6 = 6*5*4*3*2*1 = 720
    // 0! = 1 by definition
    // 1! = 1 by definition
    // n! = n * (n-1)!

    int n;
    cout << "\nEnter the value : ";
    cin >> n;

    // int result = factorial(n);
    // cout << "\nResult : " << result;

    int term = fib(n);

    cout << "\nResult : " << term;

    return 0;
}