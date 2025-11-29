#include <iostream>
using namespace std;

int c = 45;

int main()
{
    // ************** Built-in data types **************
    int a, b, c;
    cout << "Enter the value of a : ";
    cin >> a;
    cout << "Enter the value of b : ";
    cin >> b;
    c = a + b;

    cout << "\nSum of C : " << c;
    cout << "\nValue of c : " << ::c; // scope resolution operator :: for global variable

    // ************** float, double, long double Litterals **************

    float d = 34.4;
    float d = 34.4f;       // f/F is needed for floating point number to be considerd or it will be considerd as double
    long double e = 34.4l; // l/L for long double

    cout << "\nThe size of 34.4 is " << sizeof(34.4);   // 8 - double
    cout << "\nThe size of 34.4f is " << sizeof(34.4f); // 4
    cout << "\nThe size of 34.4F is " << sizeof(34.4F); // 4
    cout << "\nThe size of 34.4l is " << sizeof(34.4l); // 16
    cout << "\nThe size of 34.4L is " << sizeof(34.4L); // 16

    cout << "the value of d is : " << d << "\nThe value of e is : " << e;

    // ************** Reference Variables **************
    // shubham--->shubhu--->Rohu--->Dangerous Coder
    float x = 455;
    float &y = x; // y becomes reference variable
    cout << x << endl;
    cout << y << endl;

    // ************** Typecasting **************
    int a = 45;
    float b = 45.56;
    cout << "\nThe value of a is : " << (float)a << endl;
    cout << "\nThe value of a is : " << float(a) << endl;

    cout << "\nThe value of b is : " << (int)b << endl;
    cout << "\nThe value of b is : " << float(b) << endl;
    float c = b;
    cout << "\nThe value of c is : " << float(c) << endl;

    return 0;
}
