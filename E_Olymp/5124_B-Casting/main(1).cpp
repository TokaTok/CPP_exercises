#include <iostream>

using namespace std;

int main()
{
    int n, ans;
    cin >> n;

    int setNum[n], base[n];
    string s[n];

    for (int i = 0; i < n; i++)
        cin >> setNum[i] >> base[i] >> s[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s[i].size(); j++)
        {
            ans += (s[i][j] - 48);
            ans %= base[i] - 1;
        }
        cout << setNum[i] << " " << ans << endl;
        ans = 0;
    }

    return 0;
}
