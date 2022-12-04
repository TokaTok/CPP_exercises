#include <iostream>

using namespace std;

int main()
{
    int rows = 5, columns = 5, iP, jP, num, ans = 0;

    int arr[rows][columns];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> num;
            arr[i][j] = 0;
            if (num == 1)
            {
                iP = i;
                jP = j;
            }
        }
    }

    while (iP != 2)
    {
        if (iP > 2)
            iP--;
        else iP++;
        ans++;
    }

    while (jP != 2)
    {
        if (jP > 2)
            jP--;
        else jP++;
        ans++;
    }

    cout << ans;

    return 0;
}
