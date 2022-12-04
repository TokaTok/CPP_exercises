#include <iostream>

using namespace std;

int main()
{
    int a, b, d, m;
    cin >> a >> b;

    int ans = a;

    while(a >= b)
    {
        d = a / b;
        ans += d;
        m = a % b;
        a = d + m;
    }

    cout << ans;

    return 0;
}
