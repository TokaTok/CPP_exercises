#include <iostream>

using namespace std;

int IndexOf(string s, string sub)
{
    int sLen = s.length(), subLen = sub.length();
    if (sLen < subLen) return -1;

    for (int i = 0; i <= sLen - subLen; i++)
    {
        if (s.substr(i, subLen) == sub)
            return i;
    }
    return -1;
}

int LastIndexOf(string s, string sub)
{
    int sLen = s.length(), subLen = sub.length();
    if (sLen < subLen) return -1;
    for (int i = sLen - subLen; i >= 0; i--)
    {
        if(s.substr(i, subLen) == sub)
            return i;
    }
    return -1;
}

bool check(string & flags, string & first, string & second)
{
    int f_f_indx = IndexOf(flags, first);
    int l_s_indx = LastIndexOf(flags, second);

    return f_f_indx != -1 && l_s_indx != -1 && f_f_indx + first.length() - 1 < l_s_indx;
}

void revStr(string & s)
{
    int sLen = s.length();
    for(int i = 0, j = sLen - 1; i < sLen / 2; i++, j--)
    {
        char t = s[i];
        s[i] = s[j];
        s[j] = t;
    }
}

int main()
{
    string flags, first, second;
    cin >> flags >> first >> second;

    bool f = check(flags, first, second);

    revStr(flags);
    bool b = check(flags, first, second);

    if(f && b) cout << "both";
    else if(f) cout << "forward";
    else if(b) cout << "backward";
    else cout << "fantasy";

    return 0;
}
