#include <iostream>

using namespace std;

int main()
{
    /*
    int numberOfRabbits;
    cin >> numberOfRabbits;
    int numberOfCells;
    cin >> numberOfCells;
    int remainder;
    if (numberOfCells = 0) {
        cout << "Error" << endl;
    } else {
        int remainder = numberOfRabbits % numberOfCells;
    }
    if (remainder != 0, numberOfCells != 0) {
        cout << numberOfRabbits / numberOfCells + remainder / remainder << endl;
    } else if (numberOfCells != 0){
        cout << numberOfRabbits / numberOfCells << endl;
    } else {
        cout << "Error" << endl;
    }
    */
    int c, r;
    cin >> c >> r;
    cout << r / c + !!(r % c)<< endl;
    return 0;
}
