#include <iostream>
using namespace std;

long long potega(int x, int n) {
    int p = 1;
    for (int i = 1; i <= n; ++i) {
        p = p * x;
    }
    return p;
}

long long potega2(int x, int n) {
    if (n == 0) return 1;
    else return potega2(x, n - 1) * x;

}


int main()
{
    cout << potega(2, 5);
    cout << potega2(2, 5);
}