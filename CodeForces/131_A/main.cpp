#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    bool yes = true;



    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] > 90)
        {
            yes = false;
            break;
        }
    }


    if (yes == true && s[0] <= 90)
    {
        for (int i = 0; i < s.size(); i++)
            if (s[i] >= 65 && s[i] <= 90) s[i] += 32;
    }
    else if (yes == true && s[0] >= 97)
    {
        s[0] -= 32;
        for (int i = 1; i < s.size(); i++)
            if (s[i] >= 65 && s[i] <= 90) s[i] += 32;
    }

    cout << s;

    return 0;
}
