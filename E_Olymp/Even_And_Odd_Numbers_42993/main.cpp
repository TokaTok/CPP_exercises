#include <iostream>

using namespace std;

int main()
{
    /*
    int a, b, c;
    cin >> a >> b >> c;

    if ((a % 2 == 0 || b % 2 == 0 || c % 2 == 0) && (a % 2 != 0 || b % 2 != 0 || c % 2 != 0)) {
        cout << "YES";
    } else cout << "NO";
    */


    int a, b, c;

    cin >> a >> b >> c;
    int temp = !(a%2) + !(b%2) + !(c%2);
    (temp == 1 || temp == 2) ? cout << "YES" : cout << "NO";

    return 0;
}
