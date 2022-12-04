#include <iostream>

using namespace std;


int main()
{
    /*
    unsigned long long number, rev = 0, rem;

    cin >> number;

    while(number != 0)

    {
        rem = number % 10;
        rev = rev * 10 + rem;
        number = number / 10;
    }

    cout << rev;
    */

    string s;

    cin >> s;

    for (int i = s.length() - 1; i >= 0; i--)
        cout << s[i];

    return 0;
}
