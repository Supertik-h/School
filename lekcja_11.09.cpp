#include <iostream>
using namespace std;

long long NWD(int x, int y) {
    int r = x%y;
    while (r != 0) {
        x = y;
        y = r;
        r = x % y;
    }
    return y;
}

long long NWD2(int x, int y) {
    int r;
    do
    {
        r = x % y;
        x = y;
        y = r;
    } while (r != 0);
    return x;
}

long long NWD3(int x, int y) {
    if (y != 0) return NWD3(y, x % y);
    return x;
}

long long NWW(int x, int y) {
    return (x * y) / NWD(x, y);
}

long long FIB(int x) {
    if ((x == 0) || (x == 1)) return 1;
    else return FIB(x - 1) + FIB(x - 2);
}



int main()
{
    cout << NWD(15, 25);
    cout << NWD2(15, 25);
    cout << NWD3(15, 25);
    cout << "\n";
    cout << NWW(10, 15);
    cout << "\n";
    cout << FIB(5);
    cout << "\n";







}