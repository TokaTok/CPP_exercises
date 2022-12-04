#include <iostream>

using namespace std;

int main()
{
    int n, k, ans = 0;
    cin >> n >> k;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    k = arr[k - 1];

    for (int i = 0; i < n; i++)
    {
        if (k <= arr[i] && arr[i] > 0)
            ans++;
        else break;
    }

    cout << ans;

    return 0;
}
