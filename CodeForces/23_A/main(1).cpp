#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int ans = 0, sLen = s.length();

    for (int i = 0; i < sLen; i++)
    {
        for (int newLen = 1; newLen <= sLen - i; newLen++)
        {
            string sub1 = s.substr(i, newLen);
            for (int j = i + 1; j <= sLen - newLen; j++)
            {
                string sub2 = s.substr(j, newLen);
                //cout << "sub1 = " << sub1 << " sub2 = " << sub2 << endl;
                if (sub1 == sub2 && ans < newLen)
                    ans = newLen;
            }
        }
    }
    cout << ans;

    return 0;
}
