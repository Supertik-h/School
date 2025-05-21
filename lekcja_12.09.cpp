#include <iostream>
using namespace std;

void dz(int x, int& l, int& s, int t[]) {
    l = 0; s = 0;
    for (int i = 1; i <= x; ++i) {
        if (x % i == 0) {
            s = i + s;
            ++l;
            t[l - 1] = i;
        }
    }
}
int main()
{
    int n, y, l1, s1;
    cin >> y;
    int a[100];
    dz(y, l1, s1, a);
    cout << y << " " << l1 << " " << s1 << endl;
    for (int i = 0; i < l1; ++i) {
        cout << a[i] << endl;
    }
}