#include <iostream>
using namespace std;

int main()
{
    /*For - Loop*/

    cout << "\nFor - Loop" << " \t";
    for (int i = 0; i < 10; i++)
    {
        cout << i << " \t";
    }

    cout << "\nWhile - Loop" << " \t";

    int i = 0;
    while (i < 10)
    {
        cout << i << " \t";
        i++;
    }

    int j = 0;

    cout << "\nDo - Loop" << " \t";

    do
    {
        cout << j << " \t";
        j++;
    } while (j < 10);

    return 0;
}