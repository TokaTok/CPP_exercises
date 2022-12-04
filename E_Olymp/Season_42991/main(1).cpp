#include <iostream>

using namespace std;

int main()
{
    /*
    int i;
    cin >> i;


    switch (i)
    {
    case 1:
        cout << "Winter";
        break;

    case 2:
        cout << "Winter";
        break;

    case 3:
        cout << "Spring";
        break;

    case 4:
        cout << "Spring";
        break;

    case 5:
        cout << "Spring";
        break;

    case 6:
        cout << "Summer";
        break;

    case 7:
        cout << "Summer";
        break;

    case 8:
        cout << "Summer";
        break;

    case 9:
        cout << "Autumn";
        break;

    case 10:
        cout << "Autumn";
        break;

    case 11:
        cout << "Autumn";
        break;

    case 12:
        cout << "Winter";
        break;
    }
    */

    int n;
    cin >> n;


    if(n >= 3 && n <= 5) cout << "Spring";
    else if (n >= 6 && n <= 8) cout << "Summer";
    else if (n >= 9 && n <= 11) cout << "Autumn";
    else cout << "Winter";






    return 0;
}
