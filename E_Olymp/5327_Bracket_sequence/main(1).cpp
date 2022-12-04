#include <iostream>

using namespace std;

int main()
{
    /*
    string s;
    cin >> s;

    int openBracket = 0, closingBracket = 0;

    for(int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
            openBracket++;
        if (s[i] == ')')
            closingBracket++;
    }

    if (openBracket == 0 && closingBracket == 0)
        cout << "NO";
    else if(openBracket == closingBracket)
        cout << "YES";
    else cout << "NO";
    */


    string s;
    cin >> s;

    int ans = 0;

    for (int i = 0; ans >= 0 && i < s.size(); i++)
    {
        if (s[i] == '(')
                ans++;
        else ans--;
    }
    if (ans)
        cout << "NO";
    else cout << "YES";

    return 0;
}
