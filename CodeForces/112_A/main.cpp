#include <iostream>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int len = s1.size();

    for (int i = 0; i < len; i++)
    {
        if (s1[i] < 97)
            s1[i] += 32;

        if (s2[i] < 97)
            s2[i] += 32;
    }

    for (int i = 0; i < len; i++)
    {
        if (s1[i] > s2[i])
        {
            cout << 1;
            break;
        }
        else if (s1[i] < s2[i])
        {
            cout << -1;
            break;
        }
        else if (i == len - 1)
            cout << 0;
        else continue;
    }

    return 0;
}
