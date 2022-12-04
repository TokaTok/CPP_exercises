#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int main()
{
    /*
    int n, m, k, ans = 0;
    cin >> n >> m >> k;

    map <int, int> myMap;

    map <int, int> :: iterator itr;

    while (n--)
    {
        int key, value;
        cin >> key >> value;

        myMap.insert(make_pair(key, value));

        itr = myMap.find(key);

        if (itr -> second > value) itr -> second = value;
    }

    for (itr = myMap.begin(); itr != myMap.end(); itr++)
        ans += itr -> second;

    if (ans >= k) cout << k;
    else cout << ans;
    */

    int n, m, k, row, viability;
    cin >> n >> m >> k;

    map <int, int> myMap;

    while (n--)
    {
        cin >> row >> viability;
        if (myMap.count(row) && viability < myMap[row] || !myMap.count(row)) myMap[row] = viability;
    }

    int sum = 0;

    for (pair <int, int> item : myMap)
        sum += item.second;

    (sum <= k) ? cout << sum : cout << k;

    return 0;
}
