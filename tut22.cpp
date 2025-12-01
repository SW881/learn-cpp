#include <iostream>
#include <string>

using namespace std;

// OOPs - Classes and Objects

// Nesting of member functions
class binary
{
    // By default class members are private
    string s;
    int a;
// private:
//     void chk_bin(void);

public:
    void read(void);
    void chk_bin(void);
    void onesComp(void);
    void display(string);

} b1, b2; // or binary b1; binary b2;

void binary::read(void)
{
    cout << "\nEnter a binary number : ";
    cin >> s;
}

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "\nIncorrect binary format ";
            exit(0);
        }
    }
}

void binary::onesComp(void)
{
    chk_bin(); 
    // -> Nesting of member functions without calling object just call inside even if its private function
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}

void binary::display(string str2)
{
    cout << "\nDisplayed your number " << str2 << " : " << s;
}

int main()
{
    string str2 = "before";
    b1.read();
    b1.display(str2);
    b1.chk_bin();
    b1.onesComp();
    str2 = "after";
    b1.display(str2);

    return 0;
}