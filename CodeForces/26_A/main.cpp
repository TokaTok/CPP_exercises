#include <iostream>
#include <math.h>

using namespace std;

bool IsPrime(int n)
{
    if (n == 2) return true;
    if (n < 2 || n % 2 == 0) return false;

    int limit = sqrt(n);
    for (int i = 3; i <= limit; i += 2)
    {
        if (n % i == 0) return false;
    }
    return true;
}

bool hasExactlyTwoPrimeDivs (int n)
{
    int counter = 0;
    for (int i = 2; i <= n / 2; i++) counter += (n % i == 0 && IsPrime(i));

    return counter == 2;
}

int main()
{
    int n, ans = 0;
    cin >> n;

    for (int i = 6; i <= n; i++)
        ans += hasExactlyTwoPrimeDivs(i);

    cout << ans;

    return 0;
}
