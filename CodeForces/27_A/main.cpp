#include <iostream>
#include <set>
#include <iterator>

using namespace std;

int main()
{
    /*
    int n, ans, item, maxIndex = 0;
    cin >> n;

    set <int> mySet;

    while (n--)
    {
        cin >> item;
        if (maxIndex < item) maxIndex = item;
        mySet.insert(item);
    }

    for (int i = 1; i <= maxIndex + 1; i++)
    {
        if (mySet.find(i) == mySet.end())
        {
            ans = i;
            break;
        }
    }

    cout << ans;
    */

    int n, item, ans = 1;
    cin >> n;

    set <int> mySet;

    while (n--)
    {
        cin >> item;
        mySet.insert(item);
    }

    for (int it : mySet)
    {
        if (ans != it) break;
        ans++;
    }

    cout << ans;

    return 0;
}
