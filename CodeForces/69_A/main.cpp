#include <iostream>

using namespace std;

int main()
{
    int n, x, y, z, totalX = 0, totalY = 0, totalZ = 0;
    cin >> n;

    while(n--)
    {
        cin >> x >> y >> z;

        totalX += x;
        totalY += y;
        totalZ += z;
    }

    if (totalX == 0 && totalY == 0 && totalZ == 0)
        cout << "YES";
    else cout << "NO";

    return 0;
}
