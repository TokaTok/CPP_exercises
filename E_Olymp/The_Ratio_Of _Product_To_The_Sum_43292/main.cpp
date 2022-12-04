#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
    int n;
    double product = 1, sum = 0;
    cin >> n;

    while (n)
    {
        int dig = n % 10;
        product *= dig;
        sum += dig;
        n /= 10;
    }

    cout << setprecision(3) << fixed << product / sum;


    return 0;
}
