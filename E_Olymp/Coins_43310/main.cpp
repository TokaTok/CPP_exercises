#include <iostream>

using namespace std;

int main()
{
    int n, tails = 0, heads = 0;
    cin >> n;

    while (n--)
    {
        int th;
        cin >> th;

        if (th == 1) tails++;
        else heads++;
    }

    if (tails > heads) cout << heads;
    else cout << tails;

    return 0;
}
