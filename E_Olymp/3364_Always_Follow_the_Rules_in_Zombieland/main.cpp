#include <iostream>

using namespace std;


int main()
{
    int q, r, num;
    cin >> q;
    string arr[q];

    cin.ignore();

    for (int i = 0; i < q; i++)
        getline(cin, arr[i]);

    cin >> r;
    int arr2[r];

    for (int i = 0; i < r; i++)
        cin >> arr2[i];

    for(int i = 0; i < r; i++)
    {
        if(1 > arr2[i] || arr2[i] > q)
            cout << "Rule " << arr2[i] << ": " << "No such rule" << endl;
        else cout << "Rule " << arr2[i] << ": " << arr[arr2[i] - 1] << endl;
    }


    return 0;
}
