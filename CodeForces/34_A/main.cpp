#include <iostream>

using namespace std;

int main()
{
    /*
    int n, index1, index2, diff = 1000;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] - arr[i + 1] < diff && arr[i] - arr[i + 1] >= 0)
        {
            diff = arr[i] - arr[i + 1];
            index1 = i + 1;
            index2 = i + 2;
        }

        if (arr[i + 1] - arr[i] < diff && arr[i + 1] - arr[i] >= 0)
        {
            diff = arr[i + 1] - arr[i];
            index1 = i + 1;
            index2 = i + 2;
        }
    }
    if (arr[0] - arr[n - 1] < diff && arr[0] - arr[n - 1] >= 0)
    {
        diff = arr[0] - arr[n - 1];
        index1 = 1;
        index2 = n;
    }

    if (arr[n - 1] - arr[0] < diff && arr[n - 1] - arr[0] >= 0)
    {
        diff = arr[0] - arr[n - 1];
        index1 = 1;
        index2 = n;
    }

    cout << index1 << " " << index2;
    */

    /*
    int n;
    cin >> n;
    int cont[n];

    for (int i = 0; i < n; i++)
        cin >> cont[i];

    int minDiff = abs(cont[0] - cont[n - 1]), ind1 = 1, ind2 = n;

    for (int i = 0; i < n - 1; i++)
    {
        int localDiff = abs(cont[i] - cont[i + 1]);
        if (localDiff < minDiff)
        {
            minDiff = localDiff;
            ind1 = i + 1;
            ind2 = i + 2;
        }
    }

    cout << ind1 << " " << ind2;
    */

    /*
    int n, ind1, ind2, minDiff;
    cin >> n;

    int arr[n];

    cin >> arr[0];
    cin >> arr[1];

    minDiff = abs (arr[0] - arr[1]);

    ind1 = 1;
    ind2 = 2;

    for (int i = 2; i < n; i++)
    {
        cin >> arr[i];
        int localDiff = abs (arr[i - 1] - arr[i]);
        if (minDiff > localDiff)
        {
            minDiff = localDiff;
            ind1 = i;
            ind2 = i + 1;
        }
    }

    int lastDiff = abs (arr[0] - arr[n - 1]);

    if (lastDiff < minDiff)
    {
        ind1 = 1;
        ind2 = n;
    }

    cout << ind1 << " " << ind2;
    */

    int n, first, last, current, next, minDiff, ind1, ind2, localDiff;
    cin >> n >> first;
    current = first;

    for (int i = 2; i <= n; i++)
    {
        cin >> next;
        localDiff = abs(current - next);
        if (localDiff < minDiff)
        {
            minDiff = localDiff;
            ind1 = i - 1;
            ind2 = i;
        }
        current = next;
    }

    last = next;
    localDiff = abs(first - last);
    if (localDiff < minDiff)
    {
        ind1 = 1;
        ind2 = n;
    }

    cout << ind1 << ' ' << ind2;

    return 0;
}
