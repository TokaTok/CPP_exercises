#include <iostream>

using namespace std;

int main()
{
    /*
    int n, d, ans = 0;
    cin >> n >> d;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if ((arr[i] - arr[j] <= d && arr[i] - arr[j] >= 0) || (arr[j] - arr[i] <= d && arr[j] - arr[i] >= 0)) ans++;
            }
        }
    }
    cout << ans;
    */

    int n, d, ans = 0;
    cin >> n >> d;

    int cont[n];

    for (int i = 0; i < n; i++)
        cin >> cont[i];

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = abs (cont[i] - cont[j]);
            ans += (temp <= d);
        }
    }

    cout << ans * 2;

    return 0;
}
