#include <iostream>

using namespace std;

char check(int x, int y, int z)
{
    if (x + y > z && x + z > y && z + y > x)
        return 'T';
    if (x + y == z || x + z == y || z + y == x)
        return 'S';
    return 'I';
}

int main()
{
    /*
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    if (s1 + s2 > s3 && s1 + s3 > s2 && s2 + s3 > s1) cout << "TRIANGLE";
    else if (s1 + s2 == s3 || s1 + s3 == s2 || s2 + s3 == s1) cout << "SEGMENT";
    else if (s1 + s2 > s4 && s1 + s4 > s2 && s2 + s4 > s1) cout << "TRIANGLE";
    else if (s1 + s2 == s4 || s1 + s4 == s2 || s2 + s4 == s1) cout << "SEGMENT";
    else if (s1 + s3 > s4 && s1 + s4 > s3 && s3 + s4 > s1) cout << "TRIANGLE";
    else if (s1 + s3 == s4 || s1 + s4 == s3 || s3 + s4 == s1) cout << "SEGMENT";
    else if (s2 + s3 > s4 && s2 + s4 > s3 && s3 + s4 > s2) cout << "TRIANGLE";
    else if (s2 + s3 == s4 || s2 + s4 == s3 || s3 + s4 == s2) cout << "SEGMENT";
    else cout << "IMPOSSIBLE";
    */

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (check(a, b, c) == 'T' || check(a, b, d) == 'T' || check(a, d, c) == 'T' || check(d, b, c) == 'T')
        cout << "TRIANGLE";
    else if (check(a, b, c) == 'S' || check(a, b, d) == 'S' || check(a, d, c) == 'S' || check(d, b, c) == 'S')
        cout << "SEGMENT";
    else cout << "IMPOSSIBLE";


    return 0;
}
