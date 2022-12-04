#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int sum = 0, num;
    string s;
    cin >> s;

    stringstream ss(s);


    while(ss >> num)
        sum += num;

    cout << sum;
}
