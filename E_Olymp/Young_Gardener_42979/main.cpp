#include <iostream>

using namespace std;

int main()
{
    /*
    int layers, leaves;
    leaves = 0;
    cin >> layers;

    for (int i = 1; i <= layers; i++) {
        leaves += 2 * i;
    }

    int litersPerDay = leaves + 1;

    cout << litersPerDay;
    */

    int layers;
    cin >> layers;

    cout << ((layers * 2 -2) / 2 + 1) * (layers * 2 + 2) / 2 + 1;

    return 0;
}
