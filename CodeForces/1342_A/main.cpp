#include <iostream>

using namespace std;

int main()
{
    long long t, x, y, a, b, ans = 0, holder;
    cin >> t;

    while(t--)
    {
        cin >> x >> y >> a >> b;

        if (y > x)
        {
            holder = y;
            y = x;
            x = holder;
        }

        if (a + a <= b)
            ans += ((x + y) * a);

        if (a + a > b)
            ans += y * b + (x - y) * a;

        cout << ans << endl;

        ans = 0;
    }

    return 0;
}
