#include <iostream>

using namespace std;

int main()
{
    string s, t, ans = "YES";
    cin >> s >> t;

    int sLen = s.length(), tLen = t.length();

    if (sLen != tLen)
    {
        ans = "NO";
    }

    if (sLen == tLen)
    {
        for (int i = 0, j = sLen - 1; i < sLen; i++, j--)
        {
            if (s[i] != t[j])
            {
                ans = "NO";
                break;
            }
        }
    }

    cout << ans;

    return 0;
}
