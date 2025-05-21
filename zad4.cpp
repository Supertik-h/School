#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void przeszukajBFS(int startowyWierzcholek, vector<vector<int>>& sasiedzi, int liczbaWierzcholkow) {

    vector<bool> odwiedzony(liczbaWierzcholkow, false);

    vector<int> kolejka;

    kolejka.push_back(startowyWierzcholek);
    
    odwiedzony[startowyWierzcholek] = true;
    
    for (int i = 0; i < kolejka.size(); i++) {
        int wierzcholek = kolejka[i];
        cout << wierzcholek << " ";
        
        for (int j = 0; j < sasiedzi[wierzcholek].size(); j++) {
            int sasiad = sasiedzi[wierzcholek][j];
            if (!odwiedzony[sasiad]) {
                odwiedzony[sasiad] = true;
                kolejka.push_back(sasiad);
            }
        }
    }
    cout << endl;
}

void przetworzGraf(const string& nazwaPliku, int startowyWierzcholek) {
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
    
    cout << "Przejście wszerz od wierzchołka " << startowyWierzcholek << ": ";
    przeszukajBFS(startowyWierzcholek, sasiedzi, liczbaWierzcholkow);
}

int main() {
    string nazwaPliku = "graf_2.txt";
    int startowyWierzcholek = 0;
    przetworzGraf(nazwaPliku, startowyWierzcholek);
    return 0;
}
