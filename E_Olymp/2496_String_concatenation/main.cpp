#include <iostream>
#include <string>

using namespace std;

string reverseS(string s)
{
    s.erase(0, 1);
    s.erase(s.size() - 1, 1);
    string ans = "";
    for (int i = s.size() - 1; i >= 0; i--)
        ans += s[i];
    return ans;
}

int main()
{
    string s, subs = "";
    cin >> s;
    int counter = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            while (s[i] != ')')
            {
                counter++;
                i++;
            }
            i -= counter;
            counter++;
            subs = s.substr(i, counter);
            s = s.replace(i, counter, reverseS(subs));
        }
        counter = 0;
    }
    cout << s;

    return 0;
}
