#include <iostream>

using namespace std;

int main()
{
    int ULBX, ULBY, DRBX, DRBY, ULWX, ULWY, DRWX, DRWY, PX, PY;
    cin >> ULBX >> ULBY >> DRBX >> DRBY >> ULWX >> ULWY >> DRWX >> DRWY >> PX >> PY;

    if(PX > ULWX && PX < DRWX && PY > DRWY && PY < ULWY)
        cout << "SAD";
    else if (PX >= ULBX && PX <= DRBX && PY >= DRBY && PY <= ULBY)
        cout << "HAPPY";
    else cout << "SAD";
    return 0;
}
