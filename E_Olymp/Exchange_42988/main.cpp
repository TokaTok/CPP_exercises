#include <iostream>

using namespace std;

int main()
{
    /*
    int test;
    cin >> test;


    for (int i = 0; i < test; i++)
    {

        int days;
        cin >> days;

        switch (days % 6)
        {
        case 0:
            cout << "VCG";
            break;

        case 1:
            cout << "VGC";
            break;

        case 2:
            cout << "GVC";
            break;

        case 3:
            cout << "GCV";
            break;

        case 4:
            cout << "CGV";
            break;

        case 5:
            cout << "CVG";
            break;
        }
    }
    */

    int tests;
    cin >> tests;
    while(tests--)
    {
        int n;
        cin >> n;
        string flowers [] = {"GCV", "VGC", "CVG"};
        cout << flowers[n%3] << endl;
    }


    return 0;
}
