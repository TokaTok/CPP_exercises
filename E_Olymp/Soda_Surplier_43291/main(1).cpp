#include <iostream>

using namespace std;

int main()
{
    /*
    int e, f, c;
    cin >> e >> f >> c;

    int answer = 0;
    int bottles = e + f;

    while (bottles >= c)
    {
        bottles = bottles - c + 1;
        answer++;
    }

    cout << answer;
    */


    int e, f, c, bottles, ans = 0;
    cin >> e >> f >> c;

    bottles = e + f;

    while (bottles >= c)
    {
        int temp = bottles / c;
        int rem = bottles % c;
        bottles = temp + rem;

        ans += temp;
    }


    cout << ans;

    return 0;
}
