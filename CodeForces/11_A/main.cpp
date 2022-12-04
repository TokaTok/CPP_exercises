#include <iostream>

using namespace std;

int main()
{
    /*
    int n, d, prevM, ans = 0;
    cin >> n >> d;

    int m;
    cin >> m;

    prevM = m;

    while (--n)
    {
        cin >> m;

        while(m <= prevM)
        {
            m += d;
            ans++;
        }

        prevM = m;
    }

    cout << ans;
    */

    int n, d, prev, current, ans = 0;
    cin >> n >> d >> prev;

    while (--n)
    {
        cin >> current;
        if(prev >= current)
        {
            int needD = (prev - current) / d + 1;
            current += needD * d;
            ans += needD;
        }
        prev = current;
    }
    cout << ans;

    return 0;
}
