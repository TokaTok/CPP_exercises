#include <iostream>

using namespace std;

int main()
{
    string s;
    int threes = 0, twos = 0, ones = 0;
    cin >> s;

    for(int i = 0; i < s.size(); i++)
    {
        if (s[i] == 49)
            ones++;
        else if (s[i] == 50)
            twos++;
        else if (s[i] == 51)
            threes++;
    }

    while (ones--)
    {
        if (ones != 0) cout << 1 << '+';
        else if (ones == 0 && twos == 0 && threes == 0)
            cout << 1;
        else if (ones == 0) cout << 1 << '+';
    }
    while (twos--)
    {
        if (twos != 0) cout << 2 << '+';
        else if (twos == 0 && threes == 0)
            cout << 2;
        else cout << 2 << '+';
    }
    while (threes--)
    {
        if (threes != 0) cout << 3 << '+';
        else cout << 3;
    }
    return 0;
}
