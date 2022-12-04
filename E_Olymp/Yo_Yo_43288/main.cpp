#include <iostream>

using namespace std;

int main()
{
    /*
    int  lessThan, ascents = 0;
    double height;
    cin >> height >> lessThan;

    height /= lessThan;

    while (height > 1)
    {
        height /= lessThan;
        ascents++;
    }

    cout << ascents;
    */

    double l, k, ans = 0;
    cin >> l >> k;

    while ((l /= k) > 1)
        ans++;

    cout << ans;

    return 0;
}
