#include <iostream>

using namespace std;

int isPrime(int m, int n)
{
    int ans = 0;
    bool prime[n + 1];
    for (int i = 0; i < n; i++)
        prime[i] = true;

    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i] == true)
        {
            for (int j = i * i; j <= n; j += i)
                prime[j] = false;
        }
    }

    for (int i = m; i <= n; i++)
        if (prime[i])
            ans++;

    return ans;
}

int main()
{
    int m, n;
    cin >> m >> n;

    cout << isPrime(m, n) << endl << endl;
}
