#include <iostream>

using namespace std;


int main()
{

    int k, w, a1, a2, a3, b1, b2, b3;
    cin >> k >> w;
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;

    /*
    if ((0 < k && k <= 15) && (0 < w && w <= 30))
    {
        if (((0 < a1 && a1 <= 10) && (0 < b1 && b1 <= k)) || ((0 < a2 && a2 <= 10) && (0 < b2 && b2 <= k)) || ((0 < a3 && a3 <= 10) && (0 < b3 && b3 <= k))
            && (((a1 + a2) || (a1 + a3) || (a2 + a3)) <= 30))
        {
            cout << "YES";
        }
        else cout << "NO";
    }
    */




    if ((a1 <= w && k <= b1) || (a2 <= w && k <= b2) || (a3 <= w && k <= b3) || (a1 + a2 <= w && b1 + b2) ||
        (a1 + a3 <= w && k <= b1 + b3) || (a2 + a3 <= w && k <= b2 + b3) || (a1 + a2 + a3 <= w && k <= b1 + b2 + b3)) cout << "YES";
    else cout << "NO";



    return 0;
}
