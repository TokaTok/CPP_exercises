#include <iostream>

using namespace std;

int main()
{
    /*
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        int n;
        cin >> n;

        int holder = n;

        int counter = 0;

        int a, b;
        cin >> a >> b;
        while (--n)
        {
            int a1, b1;
            cin >> a1 >> b1;

            if (a1 >= a && b1 <= b || b <= a1) counter++;
        }

        if (counter == --holder)
            cout << "YES";
        else cout << "NO";
    }
    */

    int tests;
    cin >> tests;

    while (tests--)
    {
        int n, leftMax, rightMin, left, right;
        cin >> n >> leftMax >> rightMin;

        while (--n)
        {
            cin >> left >> right;
            if (leftMax < left) leftMax = left;
            if (rightMin > right) rightMin = right;
        }

        if (leftMax <= rightMin)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }








    return 0;
}
