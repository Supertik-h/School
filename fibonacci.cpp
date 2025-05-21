#include <iostream>
using namespace std;

long long FIB(int x) {
    if ((x == 0) || (x == 1)) return 1;
    else return FIB(x - 1) + FIB(x - 2);
}



int main()
{
    //wypisywanie danego wyrazu ciagu
    cout << FIB(5);

    cout << "\n";
    int n = 5;
    int m = 2;
    int licznik = 0;
    int k = 0;
    int s = 0;
    int tab[1000] = { 0 };

    // #1 wypisanie ciagu od 0 do n
    for (int i = 0; i <= n; ++i) {
        cout << FIB(i) << " ";
    }
    //zliczanie liczb parzystych od m do n, zapisywanie ich do tablicy i liczenie sumy
    cout << "\n";
    for (int i = m; i <= n; ++i) {
        cout << FIB(i) << " ";
        if (FIB(i) % 2 == 0) {
            licznik++;
            tab[k] = FIB(i);
            s += FIB(i);
            k++;
        }
    }
    // wypisanie parzystych liczb od m do n
    cout << "\n" << "parzyste " << licznik << endl;
    for (int i = 0; i < licznik; ++i) {
        cout << tab[i] << " ";
    }
    //wypisanie sumy parzystych liczb ciagu
    cout <<endl << "suma " << s;






}