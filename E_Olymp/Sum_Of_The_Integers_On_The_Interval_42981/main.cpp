#include <iostream>

using namespace std;

int main()
{
    /*
    long long a, b;
    cin >> a >> b;
    long long sum = 0;

    for (int i = a; i <= b; i++) {
        sum += i;
    }

    cout << sum;
    */

/*
    long long a, b;
    cin >> a >> b;
    long long sum = ((b - a + 1) * (a + b)) / 2;


    cout << sum;
*/

    long long a, b;
    cin >> a >> b;
    long long sum = (b * (b + 1))/2 - (a * (a - 1))/2;

    cout << sum;


    return 0;
}
