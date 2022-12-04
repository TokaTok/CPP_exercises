#include <iostream>

using namespace std;

int main()
{
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;

    if ((a <= x && b <= y) || (a <= y && b <= x) || (c <= x && b <= y) || (b <= x && c <= y) ||
        (a <= x && c <= y) || (c <= x && a <= y))
    {
        cout << "YES";
    }
    else cout << "NO";

    return 0;
}
