#include <iostream>
using namespace std;

/*
<< -> Insertion operator - to show the value to the user
>> -> Extraction operator - to get the value from user
*/

int main()
{
    int num_1, num_2;
    cout << "Enter the value of num1 : ";
    cin >> num_1;

    cout << "Enter the value of num2 : ";
    cin >> num_2;

    cout << "Result of sum : " << num_1 + num_2;

    /* code */
    return 0;
}
