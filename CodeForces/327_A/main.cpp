#include <iostream>

using namespace std;

int main()
{
    int n, zCounter = 0, oCounter = 0, indexOne = 0, indexTwo = 0, totalCounter = 0, ans = 0;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[j] == 1)
                oCounter++;
            else zCounter++;

            if (zCounter - oCounter > totalCounter)
            {
                totalCounter = zCounter - oCounter;
                indexOne = i;
                indexTwo = j;
            }
        }
        oCounter = 0;
        zCounter = 0;
    }

    for (int i = indexOne; i <= indexTwo; i++)
    {
        if (arr[i] == 0) arr[i] = 1;
        else arr[i] = 0;
    }

    for (int i = 0; i < n; i++)
        if (arr[i] == 1) ans++;

    cout << ans;

    return 0;
}
