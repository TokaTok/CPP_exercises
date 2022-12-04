#include <iostream>

using namespace std;

int main()
{

    /*
    int n;
    cin >> n;

    int diagonal1 = 0;
    int diagonal2 = 0;

    for (int i = 0; i < n * n; i++)
    {
        int number;
        cin >> number;

        if (i == 0 || i % (n + 1) == 0)
            diagonal1 += number;

        int counter = 1;

        if (i == (n * n - n * counter) + 1 * counter)
            diagonal2 += number;

        counter++;

    }
    cout << diagonal1 <<" "<< diagonal2;
    */



    int n, mainDiag = 0, secDiag = 0, item;
    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++){
            cin >> item;
            if (i == j) mainDiag += item;
            if(i + j == n - 1) secDiag += item;
        }
    cout << mainDiag << " " << secDiag;

    return 0;
}
