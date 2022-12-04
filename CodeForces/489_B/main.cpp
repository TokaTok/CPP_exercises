#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, g, ans = 0;
    cin >> n;
    int boys[n];


    for (int i = 0; i < n; i++)
        cin >> boys[i];

    cin >> g;
    int girls[g];

    for (int i = 0; i < g; i++)
        cin >> girls[i];

    sort(boys, boys + n);
    sort(girls, girls + g);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < g; j++)
        {
            if (abs(boys[i] - girls[j]) <= 1)
            {
                girls[j] = 1000;
                ans++;
                break;
            }
        }
    }

    cout << ans;


    return 0;
}
