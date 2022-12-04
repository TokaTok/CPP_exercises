#include <iostream>

using namespace std;

int GCD(int a, int b)
{
    if (b == 0) return a;
    return GCD(b, a % b);
}

int main()
{
    int y, w;
    cin >> y >> w;

    if (w > y) y = w;

    /*
    if (y == 1) cout << "1/1";
    else if (y == 2) cout << "5/6";
    else if (y == 3) cout << "2/3";
    else if (y == 4) cout << "1/2";
    else if (y == 5) cout << "1/3";
    else cout << "1/6";
    */

    int dotChances = 7 - y;

    int t = GCD(6, dotChances);
    cout << dotChances/t << "/" << 6/t;

    return 0;
}
