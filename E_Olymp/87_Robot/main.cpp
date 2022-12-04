#include <iostream>

using namespace std;
int arr[20000];

int main()
{
    int cells = 0, counter = 10000;
    string s;
    cin >> s;
    arr[counter] = 1;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'R')
        {
            counter++;
            arr[counter] = 1;
        }
        else if(s[i] == 'L')
        {
            counter--;
            arr[counter] = 1;
        }
        else continue;
    }
    for(int i = 0; i < 20000; i++)
        if(arr[i] == 1) cells++;

    cout << cells;
}
