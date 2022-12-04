#include <iostream>

using namespace std;

int main()
{
    int n, p1, p2, p3, t1, t2, total = 0, rem, prevR;
    cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;

    int l, r;
    cin >> l >> r;

    prevR = r;

    total += (r - l) * p1;

    while(--n)
    {
        cin >> l >> r;
        rem = l - prevR;

        if (rem > t1)
        {
            total += t1 * p1;
            rem -= t1;
        }
        else
        {
            total += rem * p1;
            rem = 0;
        }

        if (rem > t2)
        {
            total += t2 * p2;
            rem -= t2;
        }
        else
        {
            total += rem * p2;
            rem = 0;
        }

        if (rem != 0)
        {
            total += rem * p3;
            rem = 0;
        }

        prevR = r;

        total += (r - l) * p1;
    }

    cout << total;

    return 0;
}
