#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int h = 1, e = 1, l = 2, o = 1;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'h' && h > 0)
            h--;
        else if (s[i] == 'e' && e > 0 && h == 0)
            e--;
        else if (s[i] == 'l' && l > 0 && e == 0)
            l--;
        else if (s[i] == 'o' && o > 0 && l == 0)
            o--;
    }

    if (h == 0 && e == 0 && l == 0 && o == 0)
        cout << "YES";
    else cout << "NO";

    return 0;
}
