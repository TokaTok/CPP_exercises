#include <iostream>

using namespace std;

int main()
{
    /*
    string s;
    cin >> s;


    for (int i = 1; i < s.length(); i++)
    {
        if (s[i - 1] == '/' && s[i] == '/')
        {
            s.erase(i, 1);
            i--;
        }
    }

    int n = s.length();

    if (n > 1 && s[n - 1] == '/')
        s.erase(n - 1, 1);

    cout << s;
    */

    string s;
    cin >> s;

    /*
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '/' && s[i + 1] != '/' && i < s.length() - 1) cout << s[i];
        if (s[i] != '/' || s.length() == 1) cout << s[i];
    }
    */

    int sLen = s. length();
    bool met = false;

    for (int i = 0; i < sLen - 1; i++)
    {
        if (s[i] == '/' && s[i + 1] != '/') cout << '/';
        else if (s[i] != '/')
        {
            cout << s[i];
            met = true;
        }
    }
    if (!met || s[sLen - 1] != '/')
        cout << s[sLen - 1];

    return 0;
}
