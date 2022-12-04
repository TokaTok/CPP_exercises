#include <iostream>
#include <map>
#include <iterator>
using namespace std;

int  calculateShell(int n,int m)
{
    int ans = 0;
    if(n == 1)
    {
        ans = (m%2 == 0) ? m/2 : m/2 + 1;
    }
    else if(m == 1)
    {
        ans = (n%2 == 0) ? n/2 : n/2 + 1;
    }
    else if(n%2 != 0 && m%2 != 0)
    {
        ans = ((n/2) + 1) * 2;
        m -= 2;
        ans += m/2 * 2;
    }
    else if(n%2 == 0 && m%2 == 0)
    {
        ans = n;
        m -= 2;
        ans += m;
    }
    else if(n%2 != 0 && m%2 == 0)
    {
        ans = n/2 + 1  + n/2;
        m -= 2;
        ans += m;
    }
    else{
        ans = m/2 + 1  + m/2;
        n -= 2;
        ans += n;
    }


    return ans;


}


int main()
{
    int n, m, x;
    cin >> n >> m >> x;

    map <int, int> myMap;
    int times=1, cells;
    while(n > 0 && m > 0)
    {
        cells = calculateShell(n, m);
        myMap[times] = cells;
        times ++;
        n -= 2;
        m -= 2;

    }

    int ans = 0;

    for(pair<int, int> it : myMap){
        if(it.first == x){
            ans = it.second;
            break;
        }
    }

    cout << ans;

    return 0;
}
