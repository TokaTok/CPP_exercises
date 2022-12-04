#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int B, N, Hnum = 1;
    cin >> B >> N;

    while(B > (pow(Hnum, N))) Hnum++;

    if (pow(Hnum, N) - B > B - pow(Hnum - 1, N))
        cout << Hnum - 1;
    else cout << Hnum;

    return 0;
}
