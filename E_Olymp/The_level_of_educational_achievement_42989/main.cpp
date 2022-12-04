#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;

    /*
    switch (number)
    {
    case 1:
        cout << "Initial";
        break;

    case 2:
        cout << "Initial";
        break;

    case 3:
        cout << "Initial";
        break;

    case 4:
        cout << "Average";
        break;

    case 5:
        cout << "Average";
        break;

    case 6:
        cout << "Average";
        break;

    case 7:
        cout << "Sufficient";
        break;

    case 8:
        cout << "Sufficient";
        break;

    case 9:
        cout << "Sufficient";
        break;

    case 10:
        cout << "High";
        break;

    case 11:
        cout << "High";
        break;

    case 12:
        cout << "High";
        break;
    }
    */

    if (number >= 1 && number <= 3) cout << "Initial";
    else if (number >= 4 && number <= 6) cout << "Average";
    else if (number >= 7 && number <= 9) cout << "Sufficient";
    else cout << "High";


    return 0;
}
