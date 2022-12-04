#include <iostream>

using namespace std;

int main()
{
    int n, counter = 0;
    cin >> n;
    string arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < arr[i].size() - 1; j++)
            counter++;

        if(arr[i].size() > 10)
            cout << arr[i][0] << counter << arr[i][arr[i].size() - 1] << endl;
        else cout << arr[i] << endl;

        counter = 0;
    }

    return 0;
}
