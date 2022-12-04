#include <iostream>

using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;

    while(n)
    {
        if(n & 1) ans++;
        n >>= 1;
    }
    cout << ans;

    return 0;
}
