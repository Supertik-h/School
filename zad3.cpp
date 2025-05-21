#include <iostream>
#include <vector>
#include <fstream>



using namespace std;

bool przeszukajDFS(int wierzcholek, int rodzic, vector<vector<int>>& sasiedzi, vector<bool>& odwiedzony) {

    odwiedzony[wierzcholek] = true;

    for (int sasiad : sasiedzi[wierzcholek]) {
        if (!odwiedzony[sasiad]) {
            if (przeszukajDFS(sasiad, wierzcholek, sasiedzi, odwiedzony)) {
                return true;
            }
        }
        else if (sasiad != rodzic) {
            return true;
        }
    }
    return false;
}

void sprawdzCykl(const string& nazwaPliku, int startowyWierzcholek) {
    ifstream plik(nazwaPliku);

    int liczbaWierzcholkow, liczbaKrawedzi;


    plik >> liczbaWierzcholkow >> liczbaKrawedzi;

    vector<vector<int>> sasiedzi(liczbaWierzcholkow);

    for (int i = 0; i < liczbaKrawedzi; i++) {
        int u, v;

        plik >> u >> v;

        sasiedzi[u].push_back(v);
        sasiedzi[v].push_back(u);
    }
    plik.close();

    vector<bool> odwiedzony(liczbaWierzcholkow, false);

    if (przeszukajDFS(startowyWierzcholek, -1, sasiedzi, odwiedzony)) {

        cout << "W grafie istnieje cykl zawierający wierzchołek " << startowyWierzcholek << endl;
    } else {
        cout << "W grafie nie istnieje cykl zawierający wierzchołek " << startowyWierzcholek << endl;
    }
}

int main() 
{

    string nazwaPliku = "graf_2.txt";  

    int startowyWierzcholek = 0;  


    sprawdzCykl(nazwaPliku, startowyWierzcholek);
    return 0;
}