#include <iostream>

using namespace std;

int main()
{
    long long H, W, a, x, y;
    cin >> H >> W >> a;



    //if (H % a == 0) x = H / a;
    //else x = H / a + 1;
    x = H / a + !!(H%a);
    y = W / a + !!(W%a);

    cout << x * y;

    return 0;
}
