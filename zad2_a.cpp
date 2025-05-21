#include <iostream>
using namespace std;


long long potega2(int x, int n) {
    if (n == 0) return 1;
    else return potega2(x, n - 1) * x;

}

long long fun(int n, int k) {
    int s = 0;
    for (int i = 1; i <= n; ++i) {
        s += potega2(i, k);
    }
    return s;
}


int main()
{
    cout << fun(3, 2);
}