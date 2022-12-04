#include <iostream>

using namespace std;

bool IsSameChar(string & s)
{
    for (int i = 1; i < s.length(); i++)
        if (s[i] != s[0]) return false;
    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;

    string prev = "", ans = "YES", current;

    while (n--)
    {
        cin >> current;
        if (prev == current || !IsSameChar(current))
        {
            ans = "NO";
            break;
        }
        prev = current;
    }
    cout << ans;

    return 0;
}
