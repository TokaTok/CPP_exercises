#include <iostream>

using namespace std;

int main()
{
    int n, ans = 0;
    string x;
    cin >> n;

    while(n--)
    {
        cin >> x;

        if(x == "X++" || x == "++X")
            ans++;
        else ans--;
    }

    cout << ans;

    return 0;
}
