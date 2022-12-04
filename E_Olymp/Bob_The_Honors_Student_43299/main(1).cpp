#include <iostream>

using namespace std;

int main()
{
    /*
    int number;
    cin >> number;
    int quantity = 0;


    if (number / 1000 == 5) quantity++;
    if (number % 1000 / 100 == 5) quantity++;
    if (number % 1000 % 100 / 10 == 5) quantity++;
    if (number % 1000 % 100 % 10 == 5) quantity++;


    cout << quantity;
    */


    /*
    int number, quantity = 0;
    cin >> number;

    while (number)
    {
        quantity += (number % 10 == 5);
        number /= 10;
    }

    cout << quantity;
    */


    string s;
    cin >> s;
    int answer = 0;

    /*
    for (int i = 0; i < s.length(); i++)
        answer += (s[i] == '5');
    */

    for (char item : s)
        answer += (item == '5');

    cout << answer;





    return 0;
}
