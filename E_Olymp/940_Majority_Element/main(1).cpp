#include <bits/stdc++.h> in C++


using namespace std;

int main()
{
    int n, m = INT_MIN, q;
    cin >> n;

    int arr[n];
    map <int, int> myMap;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        myMap[arr[i]]++;
    }

    map<int, int> :: iterator itr;

    for (itr = myMap.begin(); itr != myMap.end(); itr++)
        if (m < itr -> second)
        {
            q = itr -> first;
            m = itr -> second;
        }

    if (myMap[q] > n / 2)
        cout << q;
    else cout << -1;

}
