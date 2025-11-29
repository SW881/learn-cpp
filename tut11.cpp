#include <iostream>
using namespace std;

int main()
{
    // for (int i = 0; i < 4; i++)
    // {
    //     if (i == 2)
    //     {
    //         // break the loop
    //         break;
    //     }
    //     else
    //     {
    //         cout << "\n i : " << i;
    //     }
    // }

    for (int i = 0; i < 5; i++)
    {
        if (i == 2)
        {
            // start from next code block or line or next value inside the loop
            continue;
        }
        cout << "\n i : " << i;
    }

    return 0;
}