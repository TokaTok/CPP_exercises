#include <iostream>
#include <set>
#include <iterator>

using namespace std;

int main()
{
    /*
    int participants;
    cin >> participants;

    int score[participants];

    for (int i = 0; i < participants; i++)
    {
        int points;
        cin >> points;

        score [i] = points;
    }


    int goldpoint = score[0];


    for (int i = 0; i < participants - 1; i++)
    {
        if (score[i] < score[i + 1] && goldpoint < score[i + 1]) goldpoint = score[i + 1];
    }


    int silverpoint = score[1];

    for (int i = 0; i < participants - 1; i++)
    {
        if (score[i] < score[i + 1] && score[i + 1] < goldpoint && silverpoint < score[i + 1] && silverpoint < goldpoint) silverpoint = score[i + 1];
    }
    cout << silverpoint;
    */


    /*
    int n, item;
    cin >> n;

    set <int> myset;

    while (n--)
    {
        cin >> item;
        myset.insert (item);
    }

    set <int> :: iterator itr = myset.end();
    itr--;
    itr--;
    cout << *itr;
    */


    int n, maxElement, ans = 0, item;
    cin >> n >> maxElement;
    while(--n)
    {
        cin >> item;
        if(maxElement < item)
        {
            ans = maxElement;
            maxElement = item;
        }

        if (ans < item && item != maxElement)
            ans = item;
    }
     cout << ans;






    return 0;
}
