#include <iostream>

using namespace std;

int main()
{
    /*
    int n, ans, evens = 0, odds = 0;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0) evens++;
        if (arr[i] % 2 == 1) odds++;
    }

    if (odds > evens)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0) ans = i;
        }
    }

    else if (evens > odds)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 1) ans = i;
        }
    }

    cout << ans + 1;
    */

    int n, odds = 0, evens = 0, evenIndex, oddIndex;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int item;
        cin >> item;

        if (item % 2 == 0)
        {
            evens++;
            evenIndex = i;
        }
        else
        {
            odds++;
            oddIndex = i;
        }
    }

    if (odds > evens) cout << evenIndex + 1;
    else cout << oddIndex + 1;

    return 0;
}
