#include <iostream>

using namespace std;

int main()
{
    /*
    long long a, b, sum;
    sum = 0;
    cin >> a >> b;

    if ((a % 2) != 0)
    {
        for (int i = a; i <= b; i += 2)
        {
            sum += i;
        }
    }
    else
    {
        for (int i = a + 1; i <= b; i += 2)
        {
            sum += i;

        }
    }

    cout << sum;
    */


    /*
    long long a, b, sum = 0;

    cin >> a >> b;

    for(int i = a % 2 == 0 ? a + 1 : a; i <= b; i += 2) {
        sum += i;
    }
    cout << sum;
    */


    long long a, b;

    cin >> a >> b;

    if (a%2 == 0) a++;
    if (b%2 == 0) b--;

    cout << ((b - a) / 2 + 1) * (b + a) / 2;




    return 0;
}
