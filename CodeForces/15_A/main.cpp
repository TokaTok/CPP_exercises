#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool customCompare(vector<double>& obj1, vector<double>& obj2)
{
    return obj1[0] < obj2[0];
}

int main()
{
    int n, t, ans = 2;
    cin >> n >> t;
    vector<vector<double>> cont;

    for(int i = 0; i < n; i++)
    {
        double houseCenter, houseLen;
        cin >> houseCenter >> houseLen;

        //  vector <double> subVec{houseCenter - houseLen / 2, houseCenter + houseLen / 2};
        // cont.push_back(subVec);
        cont.push_back({houseCenter - houseLen / 2, houseCenter + houseLen / 2});
    }

    sort(cont.begin(), cont.end(), customCompare);

    for (int i = 0; i < n - 1; i++)
    {
        double dist = cont[i + 1][0] - cont[i][1];
        if (dist > t) ans += 2;
        else if (dist == t) ans++;
    }
    cout << ans;


    return 0;
}


/*

n = 2 t = 2
0 4
6 2


                      -2   2                5 7
                    |--|   |                | |--|
-------------------------|-------------------|----------
                         0                   6

*/
