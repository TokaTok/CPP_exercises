#include <iostream>

using namespace std;

int main()
{
    int n, P, V, T, ans = 0;
    cin >> n;

    while(n--)
    {
        cin >> P >> V >> T;

        if ((P && V) || (P && T) || (V && T)) ans++;
    }

    cout << ans;

    return 0;
}
