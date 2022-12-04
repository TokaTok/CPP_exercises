#include <iostream>

using namespace std;

int main()
{
    int numberOfRides, numberOfRidesCovered, onePrice, mPrice, ans = 0;
    cin >> numberOfRides >> numberOfRidesCovered >> onePrice >> mPrice;

    if (numberOfRidesCovered * onePrice <= mPrice)
        cout << numberOfRides * onePrice << "\n";
    else
        cout << (numberOfRides / numberOfRidesCovered) * mPrice + min((numberOfRides % numberOfRidesCovered) * onePrice, mPrice) << "\n";

    return 0;
}
