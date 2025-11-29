#include <iostream>
using namespace std;

// Use void with function name when you are not returning anything
void sum(int x, int y)
{

    int r = x + y;
    cout << "\nNon returned Value of result is : " << r;
    // return r;
}

// Use int or other variables with function when you are returning someting
int sum2(int x, int y)
{

    int r = x + y;
    cout << "\nCalculated  returned Value of result is : " << r;
    return r;
}

int main()
{
    int a = 1, b = 2;
    float c = 4.55;
    bool d = false;
    char e = 'y';

    sum(a, b);
    cout << "\nValue of a is : " << a << "\nValue of b is : "
         << b << "\nValue of c is : " << c << "\nValue of d is : " << d << "\nValue of e s : " << e;

    int result = sum2(a, b);
    cout << "\nReturned Value of result is : " << result;
    return 0;
}