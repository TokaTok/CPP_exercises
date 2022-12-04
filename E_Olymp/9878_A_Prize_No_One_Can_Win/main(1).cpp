#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, ans = 0, j, i;
    cin >> n >> m;

    int arr[n];

    for (i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    for (i = n - 1; i >= 0; i--)
    {
        for (j = i; j > 0; j--)
        {
            if(i == j) continue;
            else if(arr[i] + arr[j] > m)
                break;
        }
        if (j == 0)
            ans++;
        //cout << j << endl;
    }

    cout << ans;

    return 0;
}
