#include <iostream>

using namespace std;

int a[1234567];

int main()
{
    int n, t;
    cin >> n >> t;
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
    }
    int x = 1;
    while (x < t)
        x += a[x];

    puts(x == t ? "YES" : "NO");

    return 0;
}
