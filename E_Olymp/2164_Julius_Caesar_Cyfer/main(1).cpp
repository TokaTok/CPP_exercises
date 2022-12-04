#include <iostream>

using namespace std;

int indexOf(char ch, string s)
{
    for (int i = 0; i < s.size(); i++)
        if (s[i] == ch)
            return i;
    return -1;
}

int main()
{
    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", input;
    cin >> input;
    int k, ind;
    cin >> k;

    for(int i = 0; i < input.size(); i++)
    {
        ind = indexOf(input[i], s) - k;
        if(ind < 0)
        {
            ind += 26;
            cout << s[ind];
        }
        else cout << s[ind];
    }

    return 0;
}
