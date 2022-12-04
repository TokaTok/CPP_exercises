#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    double ans, maxDist = 0, l, num;
    cin >> n >> l;

    double arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    for (int i = n - 1; i > 0; i--)
        if (arr[i] - arr[i - 1] > maxDist) maxDist = arr[i] - arr[i - 1];

    ans = max(maxDist / 2.0, max(arr[0] - 0, l - arr[n - 1]));
    cout << fixed << setprecision(10) << ans;

    return 0;
}
