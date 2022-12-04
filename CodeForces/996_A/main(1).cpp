#include <iostream>

using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;

    while(n > 0)
    {
        if (n >= 100)
        {
            n -= 100;
            ans++;
        }
        else if (n >= 20)
        {
            n -= 20;
            ans++;
        }
        else if (n >= 10)
        {
            n -= 10;
            ans++;
        }
        else if (n >= 5)
        {
            n -= 5;
            ans++;
        }
        else
        {
            n -= 1;
            ans++;
        }
    }

    cout << ans;

    return 0;
}
