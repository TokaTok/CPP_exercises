#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, c, totalArea = 0, bedroomArea = 0;
    double totalCost = 0;
    cin >> n >> c;

    while(n--)
    {
        int num;
        string s;
        cin >> num >> s;

        totalArea += num;
        if(s == "balcony")
            totalCost += (double)num / 2;
        else totalCost += num;

        if(s == "bedroom")
            bedroomArea += num;
    }
    cout << totalArea << endl;
    cout << bedroomArea << endl;
    totalCost *= c;
    cout << fixed << setprecision(6) << totalCost;

    return 0;
}
