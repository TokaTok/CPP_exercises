#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    for (int i = 1; i < s.length() - 2; i++)
    {
        if (s.substr(i, 3) == "dot")
        {
            s.erase(i, 3);
            s.insert(i, ".");
        }
        if (s.substr(i, 2) == "at")
        {
            s.erase(i, 2);
            s.insert(i, "@");
        }
    }

    cout << s;

    return 0;
}
