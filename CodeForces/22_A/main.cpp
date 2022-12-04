#include <iostream>
#include <algorithm>
#include <set>
#include <iterator>

using namespace std;


int main()
{
    /*
    bool met = false;
    int n, ans;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    ans = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (ans < arr[i])
        {
            ans = arr[i];
            met = true;
            break;
        }
    }

    if (met == true) cout << ans;
    else if (met == false) cout << "NO";
    */

    /*
    int n, item;
    cin >> n;
    set <int> mySet;

    while (n--)
    {
        cin >> item;
        mySet.insert(item);
    }

    set <int> :: iterator itr = mySet.begin();

    (mySet.size() > 1) ? cout << *(++itr): cout << "NO";
    */

    int n, minimum, item, ans = INT_MAX;
    cin >> n >> minimum;

    while (--n)
    {
        cin >> item;
        if (minimum > item)
        {
            ans = minimum;
            minimum = item;
        }
        else if (ans > item && item != minimum)
            ans = item;
    }

    (ans != INT_MAX) ? cout << ans : cout << "NO";

    return 0;
}
