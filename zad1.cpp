#include <iostream>
#include <vector>
#include <fstream>


using namespace std;

typedef vector<vector<int>> tgraf;
void Czytaj(tgraf &Graf)
{
    int n, m, w1, w2;
    ifstream we("graf.txt");
    we >> n >> m;
    Graf.resize(n);
    for(int i = 0; i < m; i++){
        we >> w1 >> w2;
        Graf[w1].push_back(w2);
    }
    we.close();
}
void DFS(int w1, tgraf &Graf, vector<bool> &Odwiedzone){
    Odwiedzone[w1] = true;
    for(int i = 0; i < Graf[w1].size(); i++){
        int w2 = Graf[w1][i];
        if (!Odwiedzone[w2]){
            DFS(w2, Graf, Odwiedzone);
        }
    }
}
int main() {
    tgraf Graf;

    Czytaj(Graf);

    vector<bool> Odwiedzone;
    Odwiedzone.resize(Graf.size(), false);
    int w1;

    cout << "Podaj numer wierzchołka poczatkowego: ";
    cin >> w1;

    DFS(w1, Graf, Odwiedzone);
    for(w1 = 0; w1 < Graf.size(); w1++){
        if (Odwiedzone[w1]){
            cout << "wierzcholek " << w1 << " : mozna dojsc do tego wierzcholka" << endl;
        }
        else{
            cout << "wierzcholek " << w1 << " : nie mozna dojsc do tego wierzcholka" << endl;
        }
    }
}