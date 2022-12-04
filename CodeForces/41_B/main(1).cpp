#include <iostream>

using namespace std;

int main()
{
    int n, d, highestDiff = 0, num, first = 0, second = 0, mult = 0, rem, ans = 0;
    cin >> n >> d;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[j] - arr[i] > highestDiff)
            {
                highestDiff = arr[j] - arr[i];
                first = arr[i];
                second = arr[j];
            }
        }
    }

    if (first != 0)
    {
        mult = d / first;
        rem = d % first;
    }
    else rem = d;

    if (mult != 0)
    {
        ans += mult * second + rem;
    }
    else ans += rem;

    cout << ans;

    return 0;
}
