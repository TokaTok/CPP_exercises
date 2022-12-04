#include <iostream>

using namespace std;



int main()
{
    /*
    int number;
    cin >> number;

    int digit;
    cin >> digit;

    int numberOfDigits = 0;

    int digits = 0;

    int holder = number;

    while (number != 0)
    {
        number = number / 10;
        digits++;
    }

    number = holder;

    int cycles = digits;

    int digitOfANumber[cycles];



    if (number < 0)
    {
        for (int i = cycles - 1; i >= 0; i--)
        {
            digitOfANumber[i] = number % 10;
            number = number / 10;
        }


        for (int i = 0; i < cycles; i++)
        {
            if (digitOfANumber[i] == digit * (-1)) numberOfDigits++;
        }
        cout << numberOfDigits;
    }

    else

    {
        for (int i = cycles - 1; i >= 0; i--)
        {
            digitOfANumber[i] = number % 10;
            number = number / 10;
        }


        for (int i = 0; i < cycles; i++)
        {
            if (digitOfANumber[i] == digit) numberOfDigits++;
        }
        cout << numberOfDigits;
    }
    */

    string s;
    cin >> s;

    char num;
    cin >> num;

    int answer = 0;

    for (int i = 0; i < s.length(); i++)
        answer += (s[i] == num);

    cout << answer;



    return 0;
}
