#include <iostream>
#include <algorithm>

using namespace std;

/*
int isLucky(int n)
{
    int ans = 1, total = 0, right = 0;
    while(n)
    {
        if (n % 10 == 4)
            right++;

        else if (n % 10 == 7)
            right++;

        n /= 10;
        total++;
    }
    if (total != right)
        ans = 0;

    return ans;
}
*/

bool checkDivisible(string a)
{
    int num = stoi(a);
    if (num % 4 == 0 || num % 7 == 0 || num % 47 == 0)
    {
        return true;
    }
    a.erase(remove(a.begin(), a.end(), '4'), a.end());
    a.erase(remove(a.begin(), a.end(), '7'), a.end());
    if (a.length() == 0)
    {
        return true;
    }
    return false;
}


int main()
{
    /*
    int n;
    cin >> n;

    if (isLucky(n))
        cout << "YES";
    else if (n % 4 == 0 || n % 7 == 0)
        cout << "YES";
    else cout << "NO";
    */


    string s;
    cin >> s;

    if (checkDivisible(s))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }


    return 0;
}
