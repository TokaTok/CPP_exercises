#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    /*
    long long n, a;
    cin >> n >> a;


    long long sum = ((n * pow(a, n + 1) - (n + 1) * pow(a, n) + 1) / pow (a - 1, 2)) * a;
    */

    /*
    for (int i = 1; i <= n; i++)
        sum += i * pow(a, i);
    */

    /*
    //long long powerOf = (a - pow(a, n + 1) / 1 - a);

    long long powerOf = (pow(a, n + 1) - 1) / a - 1;


    for (int i = 0; i < n; i++)
        sum += powerOf * i;
    */


    /*
    for (int i = 1; i <= n; i++)
        sum += pow(a, 2 * i - 1) / pow(a, n) - 1;
    */
    //cout << sum;

    /*
    long long n, a, ans = 0;

    cin >> n >> a;

    for (int i = 1; i <= n; i++)
        ans += i * pow(a, i);

    cout << ans;
    */


    /*
    long long a, ans = 0;

    cout << "Enter a: ";
    cin >> a;

    for (int i = 1; ; i++)
    {
        ans += i * pow(a, i);
        cout << "i = " << i << "  ans = " << ans << endl;
        if (ans >= 1e18) break;
    }
    */


    long long n, a, ans = 0;
    cin >> n >> a;

    if (a == 1)
        ans = n * (n + 1) / 2;
    else
        for (int i = 1; i <= n; i++)
            ans += i * pow(a, i);

    cout << ans;

    return 0;
}
