#include <iostream>
using namespace std;

struct employee
{
    int eId;
    char favChar;
    float salary;
    int cars[2];
};

/*
    "typedef" with struct is usesfull for calling in shorthand like here
    ep is called instead of struct employeeData -> eD
*/

typedef struct employeeData
{
    int eId;
    char favChar;
    float salary;
    int cars[2];
} epD;

union money
{
    int rice;
    char car;
    float pounds;
};

int main()
{
    // ******************** Structures ********************

    struct employee shubh_1; // making an employee
    shubh_1.eId = 1;
    shubh_1.favChar = 'C';
    shubh_1.salary = 120000000;

    shubh_1.cars[0] = {1};
    shubh_1.cars[1] = {2};

    cout << "Shubh_1 eId : " << shubh_1.eId << endl;
    cout << "Shubh_1 favChar : " << shubh_1.favChar << endl;
    cout << "Shubh_1 salary : " << shubh_1.salary << endl;
    for (int i = 0; i < 2; ++i)
    {
        cout << "Shubh car : " << shubh_1.cars[i] << endl;
    }

    epD shubh_2; // making an employee
    shubh_2.eId = 2;
    shubh_2.favChar = 'C';
    shubh_2.salary = 120000000;

    shubh_2.cars[0] = {1};
    shubh_2.cars[1] = {2};

    cout << "Shubh_2 eId : " << shubh_2.eId << endl;
    cout << "Shubh_2 favChar : " << shubh_2.favChar << endl;
    cout << "Shubh_2 salary : " << shubh_2.salary << endl;
    for (int i = 0; i < 2; ++i)
    {
        cout << "Shubh_2 car : " << shubh_2.cars[i] << endl;
    }

    // ******************** Unions ********************

    // Uninon works with only any one of the keys in object if one is used other keys shows garbage value
    union money m1;
    m1.rice = 34; // 34 is set but as car is declared as 'C' it is show car correct but garbage for rice
    m1.car = 'C';

    cout << m1.rice << endl;
    cout << m1.car << endl;

    // ******************** Enums ********************

    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };

    Meal m2 = lunch;
    cout << (m2 == 3) << endl; // Boolean true as lunch is in 1st position

    return 0;
}