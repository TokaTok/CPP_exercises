#include <iostream>
#include <map>

using namespace std;
/*
int IndexOf(int arr[][2],int n, int camelPos)
{
    for (int i = 0; i < n; i++)
    {
        if (camelPos == arr[i][0]) return i;
    }
    return -1;
}
*/
int main()
{
    /*
    int n;
    cin >> n;

    string ans = "NO";

    int arr[n][2];

    for (int i = 0; i < n; i++)
        cin >> arr[i][0] >> arr[i][1];

    for (int i = 0; i < n; i++)
    {
        int secondCamel = arr[i][0] + arr[i][1];
        int secCamelIndex = IndexOf(arr, n, secondCamel);
        if (secCamelIndex != -1 && arr[secCamelIndex][0] + arr[secCamelIndex][1] == arr[i][0])
        {
            ans = "YES";
            break;
        }
    }

    cout << ans;
*/
    int n, pos, spit;
    cin >> n;
    map<int, int> cont;

    while(n--){
        cin >> pos >> spit;
        cont[pos] = spit;
    }

    string ans="NO";
    for(pair<int, int> it : cont){
        int secCam = it.first + it.second;
        if(cont.count(secCam) && secCam + cont[secCam] == it.first){
            ans = "YES";
            break;
        }
    }
    cout << ans;

    return 0;
}
