#include <iostream>

using namespace std;

int main()
{
    string s, ss;
    cin >> s >> ss;

    if (s.size() >= ss.size())
        cout << "go";
    else cout << "no";


    return 0;
}
