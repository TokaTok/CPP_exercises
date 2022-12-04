#include <iostream>

using namespace std;

int GCD(int a, int b)
{
    if (b == 0) return a;
    return GCD(b, a % b);
}

int base(int A, int i)
{
    int ans = 0;

    while(A)
    {
        ans += A % i;
        A /= i;
    }
    return ans;
}

int main()
{
    int A, total = 0;
    cin >> A;


    for (int i = 2; i <= A - 1; i++)
        total += base(A, i);



    int gcd = GCD(total, A - 2);

    /*
    total /= gcd;
    denominator /= gcd;

    cout << total << "/" << denominator;
    */
    cout << total / gcd << "/" << (A - 2) / gcd;

    return 0;
}
