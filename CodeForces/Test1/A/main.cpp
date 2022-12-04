#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases, n, H, number, i, Health;
    cin >> cases;

    vector <int> weapons;

    while(cases--)
    {
        cin >> n >> H;

        for (i = 0; i < n; i++)
        {
            cin >> number;
            weapons.push_back(number);
        }
        sort(weapons.begin(), weapons.end(), greater<int>());
        for(i = 0, Health = H; Health > 0; i++)
        {
            if (i % 2 == 1) Health -= weapons[1];
            else if (i == 0) Health -= weapons[0];
            else if (i % 2 == 0) Health -= weapons[0];
            cout << Health << endl;
        }
        cout << i << endl;
    }


    return 0;
}
