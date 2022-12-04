#include <iostream>

using namespace std;

int main()
{
    /*
    int n;
    cin >> n;
    int answer = 1e5;

    while(n)
    {
        int number;
        cin >> number;
        if (number <= answer) answer = number;
        n--;
    }
    cout << answer;
    */


    int n, item, minVal;
    cin >> n >> minVal;

    while(--n)
    {
        cin >> item;
        if (minVal > item)
            minVal = item;
    }

    cout << minVal;


    return 0;
}
