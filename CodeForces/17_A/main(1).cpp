#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

/*
bool IsPrime(int n)
{
    for(int i = 2; i < n - 1; i++)
        if (n % i == 0) return false;
    return true;
}
*/

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

int main()
{
    int n, k, counter = 0;
    cin >> n >> k;

    vector <int> primes;

    for (int i = 2; i <= n; i++)
        if (IsPrime(i)) primes.push_back(i);

    for (int i = 0; i < primes.size() - 1; i++)
    {
        int temp = primes[i] + primes[i + 1] + 1;
        if (temp > n) break;
        counter += IsPrime(temp);
    }

    (counter >= k) ? cout << "YES" : cout << "NO";

    return 0;
}
