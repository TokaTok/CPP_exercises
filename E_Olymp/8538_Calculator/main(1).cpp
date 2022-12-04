#include <iostream>

using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;

    while(n > 1)
    {
        if(n % 3 != 0) n--;
        else n /= 3;
        ans++;
    }

    cout << ans;

    return 0;
}
