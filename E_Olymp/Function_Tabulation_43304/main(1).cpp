#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

int main()
{
    /*
    double a, b, h;
    cin >> a >> b >> h;

    std::cout << std::setprecision(4) << a << " " << sin(a) * 3 << endl;
    std::cout << std::setprecision(4) << a + h << " " << sin(a + h) * 3 << endl;
    std::cout << std::setprecision(4) << b << " " << sin(b) * 3 << endl;
    */

    double a, b, h;
    cin >> a >> b >> h;

    for(double x = a; x <= b; x += h)
        cout << setprecision(3) << fixed << x << " " << 3 * sin(x) << endl;

    return 0;
}
