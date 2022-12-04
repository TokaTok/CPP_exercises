#include <iostream>

using namespace std;

int main()
{
    /*
    int n, a1 = 0, a2 = 0, a3 = 0;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int m = 0;

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; i++)
            {
                if (i != j)
                {
                    if (arr[m] == arr[i] + arr[j])
                    {
                        a1 = m + 1;
                        a2 = i + 1;
                        a3 = j + 1;
                    }
                }
            }
        }
        m++;
    }

    if (a1 == 0) cout << -1;
    else
        cout << a1 << " " << a2 << " " << a3;
    */

    int n, a1 = 0, a2, a3;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (i != j && j != k)
                {
                    if (arr[i] == arr[j] + arr[k])
                    {
                        a1 = i + 1;
                        a2 = j + 1;
                        a3 = k + 1;
                    }
                }
            }
        }
        if (a1 != 0) break;
    }

    if (a1 == 0) cout << -1;
    else
        cout << a1 << " " << a2 << " " << a3;

    return 0;
}
