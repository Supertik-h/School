#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void przeszukajDFS(int wierzcholek, vector<vector<int>>& sasiedzi, vector<bool>& odwiedzony) {

    odwiedzony[wierzcholek] = true;

    for (int sasiad : sasiedzi[wierzcholek]) {
        if (!odwiedzony[sasiad]) {
            przeszukajDFS(sasiad, sasiedzi, odwiedzony);
        }
    }
}

bool czySpojny(vector<vector<int>>& sasiedzi, int liczbaWierzcholkow) {
    vector<bool> odwiedzony(liczbaWierzcholkow, false);

    
    przeszukajDFS(0, sasiedzi, odwiedzony);


    for (bool czyOdwiedzony : odwiedzony) {
        if (!czyOdwiedzony) return false;
    }

    return true;
}

void sprawdzSpojnosc(const string& nazwaPliku) {

    ifstream plik(nazwaPliku);
    int liczbaWierzcholkow, liczbaKrawedzi;
    plik >> liczbaWierzcholkow >> liczbaKrawedzi;

    vector<vector<int>> sasiedzi(liczbaWierzcholkow);
    for (int i = 0; i < liczbaKrawedzi; i++) {
        int u, v;
        plik >> u >> v;
        sasiedzi[u].push_back(v);
    }
    plik.close();

    if (czySpojny(sasiedzi, liczbaWierzcholkow)) {

        cout << "Graf jest spójny." << endl;

    } else {

        cout << "Graf NIE jest spójny." << endl;
    }
}

int main() {



    string nazwaPliku = "graf_2.txt";

    sprawdzSpojnosc(nazwaPliku);

    return 0;
}
