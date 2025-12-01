#include <iostream>
using namespace std;

// structure (struct) is not usefull for data hiding
// Data hiding is possible only by using OOP
// ************ Classes & Private & Public ************
class Employee
{
private:
    int a, b, c;
    // void setData(int a1, int b1, int c1); // Declaration for searching further

public:
    int d, e;
    void setData(int a1, int b1, int c1); // Declaration for searching further
    void getData()
    {
        // Can implement here it self
        cout << "The value of a is : " << a << endl;
        cout << "The value of b is : " << b << endl;
        cout << "The value of c is : " << c << endl;
        cout << "The value of d is : " << d << endl;
        cout << "The value of e is : " << e << endl;
    }
};

void Employee::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
    cout << "This is employee setData" << endl;
}

int main()
{
    Employee shubh;
    // shubh.a = 23 --> This will throw error as it is private

    shubh.d = 24;
    shubh.e = 32;

    cout << "Setting employee data" << endl;

    shubh.setData(1, 2, 3);
    shubh.getData();

    return 0;
}