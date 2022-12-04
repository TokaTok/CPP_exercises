#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    /*
    int n, first, ans = 0;
    cin >> n;

    map <int, int> myMap;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1 && first != 1)
        {
            first = arr[i];
            ans++;
            if (!myMap[first])
            {
                myMap[first] = i + 2001;
            }
        }
        if (arr[i] == first + 1 && first != first + 1)
        {
            first = arr[i];
            ans++;
            if (!myMap[first])
            {
                myMap[first] = i + 2001;
            }
        }
    }
    cout << ans << endl;

    for (int i = 1; i <= myMap.size(); i++)
        cout << myMap[i] << " ";
    */
    int n, item, cursor = 1;
    cin >> n;

    vector<int> ans;

    for(int i = 1; i <= n; i++)
    {
        cin >> item;
        if(cursor == item)
        {
            ans.push_back(i + 2000);
            cursor++;
        }
    }
    cout << cursor - 1 << endl;

    for (int it : ans)
        cout << it << " ";

    return 0;
}
