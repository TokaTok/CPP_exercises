#include <iostream>
#include <cmath>


using namespace std;

int main()
{

    /*
        long long binary;
        cin >> binary;

        int holder = binary;

        int counter = 0;

        while (binary)
        {
            binary /= 10;
            counter++;
        }

        binary = holder;

        holder = counter;

        int arr[counter];
        counter--;

        for (int i = counter; i >= 0; i--)
        {
            arr[i] = binary % 10;
            binary /= 10;
        }

        counter = holder;

        int answer = 0;

        holder--;

        for (int i = 0; i < counter; i++)
        {
            answer += arr[i] * pow(2, holder);
            holder--;
        }

        cout << answer;
    */


    /*
    string s;
    cin >> s;

    int ans = 0, len = s.length();

    for (int i = 0, exponent = len - 1; i < len; i++, exponent--)
        ans += (s[i] - '0') * pow(2, exponent);

    cout << ans;
    */


    long long n, ans = 0, ldigit, exp = 0;
    cin >> n;

    while(n)
    {
        ldigit = n % 10;
        n /= 10;
        ans += ldigit * pow(2, exp++);
    }

    cout << ans;

    return 0;
}
