#include <iostream>
#include <chrono>

using namespace std;

// ********** Inline funcitons **********
// Mostly use for small functions when their is small operations
// inline int product(int a, int b)
// {
//     return (a * b);
// }

int product(int a, int b)
{
    static int c = 0;
    c = c + 1;
    // cout << "C : " << c << endl;
    return a * b + c;
}

/*
For global variable memory gets allocated in data segments static and
global works similar but if using in function or in-scoped{}
static keyword with datatype provides similar work as global variable
*/

float moneyRecieved(const int currentMoney, float factor = 1.04f)
{
    // currentMoney = 200000; use const for constant arguments to not update inside any function
    return currentMoney * factor;
}

int main()
{
    auto start = chrono::high_resolution_clock::now();

    // int a, b;
    // cout << "\nEnter the value a & b : ";
    // cin >> a >> b;
    // product(a, b);

    // cout << "Product is : " << product(a, b) << endl;
    // cout << "Product is : " << product(a, b) << endl;
    // cout << "Product is : " << product(a, b) << endl;
    // cout << "Product is : " << product(a, b) << endl;
    // cout << "Product is : " << product(a, b) << endl;
    // cout << "Product is : " << product(a, b) << endl;

    // for (int i = 0; i < 5; i++)
    // {
    //     // *************** Static variables ***************
    //     static int c = 0;
    //     cout << "I : " << i << endl;
    //     c++;
    //     cout << "C : " << c << endl;
    // }

    int money = 100000;
    float factor = 1.1f;
    cout << "\nIf you have " << money << " Rs in your bank account, you will recieve " << moneyRecieved(money, factor) << " Rs";

    auto end = chrono::high_resolution_clock::now();

    chrono::duration<double> duration = end - start;

    cout << "\nExecution time : " << duration.count() << " seconds" << endl;

    return 0;
}