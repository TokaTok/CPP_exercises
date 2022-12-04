#include <iostream>

using namespace std;

int main()
{
    int n, temp;
    cin >> n;

    for (int i = 0; i < n * 2 + 1; i++)
    {
        if (i == n)
        {
            temp = n * 2 + 1;
            while (temp--) cout << '*';
        }
        else
        {
            for (int j = 0; j < n * 2 + 1; j++)
            {
                if (j == n) cout << '*';
                else cout << '.';
            }
        }
        cout << endl;
    }

    return 0;
}
