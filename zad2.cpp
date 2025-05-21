#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

typedef vector<vector<int>> tgraf;

void Czytaj(tgraf &Graf) {
    int n, m, w1, w2;
    ifstream we("graf_2.txt");

    we >> n >> m;
    Graf.resize(n);
    for (int i = 0; i < m; i++) {

        we >> w1 >> w2;
        Graf[w1].push_back(w2);
    }

    we.close();
}


void DFS(int w1, tgraf &Graf, vector<bool> &Odwiedzone) {
    Odwiedzone[w1] = true;
    for (int i = 0; i < Graf[w1].size(); i++) {
        int w2 = Graf[w1][i];
        if (!Odwiedzone[w2])
            DFS(w2, Graf, Odwiedzone);
    }
}

int main() {
    tgraf Graf;

    Czytaj(Graf);  

    vector<bool> Odwiedzone;
    Odwiedzone.resize(Graf.size(), false);

    int w1, w2;


    cout << "Podaj numer wierzcholka poczatkowego: ";
    cin >> w1;

    cout << "Podaj numer wierzcholka koncowego: ";
    cin >> w2;

    
    DFS(w1, Graf, Odwiedzone);

    
    if (Odwiedzone[w2]) {
        cout << "Istnieje droga z wierzcholka " << w1 << " do wierzcholka " << w2 << endl;
    } else {
        cout << "Nie ma drogi z wierzcholka " << w1 << " do wierzcholka " << w2 << endl;
    }
    
    return 0;
}