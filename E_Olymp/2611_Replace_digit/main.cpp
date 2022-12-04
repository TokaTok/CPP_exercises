#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string n, a, b;
    cin >> n >> a >> b;
    long long i = 0;

    for (; i < n.size(); i++)
    {
        if (n[i] == a[0])
            n = n.replace(i, 1, b);
    }

    stringstream ss(n);
    ss >> i;
    cout << i;

    return 0;
}
