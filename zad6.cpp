#include <iostream>
#include <vector>
#include <stack>
#include <fstream>



using namespace std;

void przeszukajWGlab(const string& nazwaPliku, int startowyWierzcholek) {

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

    vector<bool> odwiedzony(liczbaWierzcholkow, false);
    stack<int> stos;

    stos.push(startowyWierzcholek);

    odwiedzony[startowyWierzcholek] = true;

    cout << "Przejście w głąb od wierzchołka " << startowyWierzcholek << ": ";
    while (!stos.empty()) {

        int wierzcholek = stos.top();
        stos.pop();
        cout << wierzcholek << " ";

        for (int sasiad : sasiedzi[wierzcholek]) {
            
            if (!odwiedzony[sasiad]) {
                odwiedzony[sasiad] = true;
                stos.push(sasiad);
            }
        }
    }
    cout << endl;
}

int main() {

    string nazwaPliku = "graf_2.txt";
    int startowyWierzcholek = 0;

    przeszukajWGlab(nazwaPliku, startowyWierzcholek);
    return 0;
}
