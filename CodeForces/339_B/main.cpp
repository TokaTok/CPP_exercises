#include <iostream>

using namespace std;

int main()
{
    int n, m, a = 1, b;
    long long ans = 0;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> b;
        if (a <= b)
            ans += b - a;
        else ans += n - a + b;
        a = b;
    }

    cout << ans;

    return 0;
}
