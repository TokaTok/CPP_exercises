#include <iostream>

using namespace std;

int main()
{
    /*
    long long number, holder;
    int secondDigit = 0;

    cin >> number;

    int digits = 0;
    holder = number;

    while (number != 0)
    {
        number = number / 10;
        digits++;
    }

    number = holder;

    int arr[digits];


    for (int i = digits - 1; i >= 0; i--)
    {
        arr[i] = number % 10;
        number = number / 10;
    }

    cout << arr[1];


    /*
    if (number > 0 && number < 100)
    {
        secondDigit = number % (10 * (digits - 1));

        cout << secondDigit;
    }

    if (number > 100 && number < 1000)
    {
        number = number / (10 ^ (digits - 3));
        secondDigit = number % 10;

        cout << secondDigit;

    }

    if (number > 1000)
    {
        number = number / (10 ^ (digits - 2));
        secondDigit = number % 10;

        cout << secondDigit;
    }
    */

    /*
    long long n;
    cin >> n;

    if (n < 0)
        n = -n;

    while (n >= 100)
        n /= 10;

    cout << n % 10;
    */


    string s;
    cin >> s;

    if (s[0] == '-')
        //s = s.substr(1);
        s = s.erase(0, 1);

    cout << s[1];



    return 0;
}
