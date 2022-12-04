#include <iostream>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    int x = k / (n - 1), rem = k - x * (n - 1);

    if (!rem)
        cout << n * x - 1 << "\n";
    else
        cout << n * x + rem << "\n";
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }

    return 0;
}

