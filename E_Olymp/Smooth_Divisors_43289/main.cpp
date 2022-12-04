#include <iostream>

using namespace std;

int main()
{

    int number;
    cin >> number;

    int answer = 0;

    for (int i = 1; i < number; i++)
        answer += (number % i == number / i);

    cout << answer;

/*
    if (answer == 0)
        cout << "No smooth divisors";
    else cout << "Number of smooth divisors for " << number << " is: " << answer;
        */




    /*
    int number;
    cin >> number;

    int answer = 0;

    for (int i = 1; i < number; i++)
        answer += (number % i == number / i);

    cout << answer;
    */


    /*
    int n, ans = 0;

    cin >> n;

    for (int i = 1; i < n; i++)
        ans += (n / i == n % i);

    cout << ans;
    */


    return 0;
}
