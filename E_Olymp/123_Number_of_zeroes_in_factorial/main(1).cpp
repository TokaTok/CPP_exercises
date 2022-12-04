#include <iostream>

using namespace std;

int main()
{
    long long N, P = 0;
    cin >> N;

    while(N >= 5)
        P += N /= 5;
    cout << P;

    return 0;
}
