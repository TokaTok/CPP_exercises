#include <iostream>

using namespace std;

int main()
{
    int n, d, maxArea = 0, maxNum = 0, num, temp = 0, localArea = 0;
    cin >> n >> d;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (num > maxNum) maxNum = num;
        arr[i] = num;
    }

    for (int len = d; len <= maxNum; len++)
    {
        temp = 0;
        for (int item : arr)
        {
            temp += item / len;
        }
        localArea = temp * len;
        if (localArea > maxArea) maxArea = localArea;
    }
    cout << maxArea;

    return 0;
}

/*
n=4 minLen=2
1 2 3 4

 --
 --
 --        ---
 --        ---       ----
len=2     len = 3    len = 4
area = 8  area = 6   area = 4


n=5 d=3
5 5 7 3 1

---
---
---       ----      -----
---       ----      -----
---       ----      -----      ------     -------
len = 3   len = 4   len = 5    len = 6    len = 7



*/
