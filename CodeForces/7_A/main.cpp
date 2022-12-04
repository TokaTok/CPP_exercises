#include <iostream>

using namespace std;

int countChar (string s, char c)
{
    int counter = 0;

    for (char it : s)
        counter += (it == c);

    return counter;
}

int main()
{
    int n = 8, ans = 0;
    string item;
    bool met = false;

    while (n--)
    {
        cin >> item;
        if (item == "BBBBBBBB")
            ans++;
        else if (!met)
        {
            ans += countChar (item, 'B');
            met = true;
        }
    }

    cout << ans;

    return 0;
}
