#include <iostream>

using namespace std;

int vowelChk(char ch)
{
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch =='o' || ch=='O' || ch == 'u' || ch == 'U' || ch == 'Y' || ch == 'y')
        return 1;
    else
        return 0;
}

int main()
{
    string s, vowels = "AEIOUYaeiouy";
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (vowelChk(s[i]) == 1)
        {
            s.erase(i, 1);
            i--;
        }
        if(s[i] >=  65 && s[i] <= 90)
            s[i] += 32;
    }

    int len = s.size();

    for (int i = 0; i < s.size(); i+=2)
        {
            if (s[i] != '.')
                s.insert(i, ".");
        }

    cout << s;

    return 0;
}
