#include <iostream>

using namespace std;

int main()
{
    /*
    int numberOfCanaries;
    cin>>numberOfCanaries;
    int numberOfCages;
    cin>>numberOfCages;
    int remainder = numberOfCanaries % numberOfCages;
    if (remainder != 0) {
        cout << numberOfCanaries / numberOfCages + remainder / remainder << endl;
    } else if (numberOfCages != 0){
        numberOfCanaries / numberOfCages
    } else {
        cout << "Error"<< endl;
    }
    cout << numberOfCanaries - numberOfCages + 1 << endl;
    */
    /*
    int can, cag;
    cin >> can >> cag;
    int goodRange = can / cag;
    if (can % cag != 0)
        goodRange++;
    int badRange = can + 1 - cag;
    cout << goodRange << " " << badRange << endl;
    return 0;
    */

    int c, n;
    cin >> c >> n;
    cout << c/n + !!(c % n) << " " << c - n + 1 << endl;
}
