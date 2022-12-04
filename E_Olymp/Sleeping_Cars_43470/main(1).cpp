#include <iostream>

using namespace std;

int main()
{
    string s;
    int h = 0, ans = 0;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'k') h++;
        if (h > ans) ans = h;
        if (s[i] == 'p') h = 0;
    }

    cout << ans;

    return 0;
}
