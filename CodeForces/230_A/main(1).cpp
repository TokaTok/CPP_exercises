#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s, n, x, y, i;
    cin >> s >> n;

    vector<pair<int,int>> vec;

    for(i = 0; i < n; i++)
    {
        cin >> x >> y;
        vec.push_back(make_pair(x, y));
    }

    sort(vec.begin(), vec.end());

    for(i = 0; i < n; i++)
    {

        if(vec[i].first >= s)
        {
            cout<<"NO";

            return 0;
        }
        s += vec[i].second;
    }

    cout << "YES";

    return 0;
}
