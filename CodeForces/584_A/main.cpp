#include <iostream>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    string s = "";

    if (t == 1)
    {
        for (int i = 0; i < n; i++)
        {
            s += "1";
        }
        cout << s;
    }
    else if (t == 2)
    {
        for (int i = 0; i < n; i++)
        {
            s += "2";
        }
        cout << s;
    }
    else if (t == 3)
    {
        for (int i = 0; i < n; i++)
        {
            s += "3";
        }
        cout << s;
    }
    else if (t == 4)
    {
        for (int i = 0; i < n; i++)
        {
            s += "4";
        }
        cout << s;
    }
    else if (t == 5)
    {
        for (int i = 0; i < n; i++)
        {
            s += "5";
        }
        cout << s;
    }
    else if (t == 6)
    {
        for (int i = 0; i < n; i++)
        {
            s += "6";
        }
        cout << s;
    }
    else if (t == 7)
    {
        for (int i = 0; i < n; i++)
        {
            s += "7";
        }
        cout << s;
    }
    else if (t == 8)
    {
        for (int i = 0; i < n; i++)
        {
            s += "8";
        }
        cout << s;
    }
    else if (t == 9)
    {
        for (int i = 0; i < n; i++)
        {
            s += "9";
        }
        cout << s;
    }
    else if (n == 1 && t == 10)
    {
        cout << -1;
    }
    else if (t == 10)
    {
        s += "1";
        for (int i = 0; i < n - 1; i++)
        {
            s += "0";
        }
        cout << s;
    }

    return 0;
}
