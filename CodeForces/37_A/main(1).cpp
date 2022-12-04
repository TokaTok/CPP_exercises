#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n, key, numberOftowers = 0, ans = 0;
    cin >> n;

    map <int, int> myMap;

    for (int i = 0; i < n; i++)
    {
        cin >> key;
        /*
        if (!myMap[key]) numberOftowers++;

        myMap[key]++;
        */
         myMap[key]++;


        if (myMap[key] > ans) ans = myMap[key];
    }

    cout << ans << " " << myMap.size();

    return 0;
}
