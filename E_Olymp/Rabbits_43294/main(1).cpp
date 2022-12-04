#include <iostream>

using namespace std;

int main()
{
    int months, extra, rabbits = 1;
    cin >> months >> extra;

    for (int i = 0; i < months; i++)
    {
        if (rabbits > extra) rabbits -= extra;
        rabbits *= 2;
    }
    cout << rabbits;

    return 0;
}
