// Control structures - sequence, selection, loop

#include <iostream>
using namespace std;

int main()
{

    cout << "\nThis is tut-9";

    int age;

    cout << "\nType your age : ";
    cin >> age;

    // if (age < 18)
    // {
    //     cout << "\nYou don't have legal age to have sex";
    // }
    // else if (age < 18)
    // {
    //     cout << "\nYou are on border line";
    // }
    // else
    // {
    //     cout << "\nYou  are authrorized to have beer, cigrates and sex";
    // }

    switch (age)
    {
    case 17:
        cout << "\nYou  are authrorized to have beer, cigrates and sex";
        break;
    case 18:
        cout << "\nYou are on border line";
        break;

    case 22:
        cout << "\nYou  are authrorized to have beer, cigrates and sex";
        break;

    default:
        cout << "\nYou  are not born";
        break;
    }

    return 0;
}