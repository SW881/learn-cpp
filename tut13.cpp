#include <iostream>
using namespace std;

// ************** Arrays **************

int main()
{
    const int marks[4] = {10, 20, 30, 40};

    // Allocated array -> marks[4]
    // Non allocated -> marks[]

    cout << "Marks" << endl;

    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    int mathMarks[4];

    mathMarks[0] = 20;
    mathMarks[1] = 15;
    mathMarks[2] = 95;
    mathMarks[3] = 69;

    cout << "Math Marks" << endl;

    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl;

    cout << "Math Marks using loop" << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << mathMarks[i] << endl;
    }

    // ************** Pointers and Arrays **************

    cout << "Pointers and Arrays" << endl;

    int *p = mathMarks;

    cout << *(p++) << endl;
    cout << *(p) << endl;

    cout << *(++p) << endl;
    cout << *(p) << endl;

    cout << *(--p) << endl;
    cout << *(p) << endl;

    // cout << "Math Marks using at 0 : " << *(p) << endl;

    // cout << "Math Marks using at 0 : " << *(p) << endl;
    // cout << "Math Marks using at 1 : " << *(p + 1) << endl;
    // cout << "Math Marks using at 2 : " << *(p + 2) << endl;
    // cout << "Math Marks using at 3 : " << *(p + 3) << endl;

    // cout << "Math Marks using at 0 : " << &(p) << endl;
    // cout << "Math Marks using at 1 : " << &(p + 1) << endl;
    // cout << "Math Marks using at 2 : " << &(p + 2) << endl;
    // cout << "Math Marks using at 3 : " << &(p + 3) << endl;

    return 0;
}