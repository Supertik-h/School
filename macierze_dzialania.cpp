#include <iostream>
using namespace std;


int main()

{
    int n = 2;
    int tab[n][n] = {0};
    int tab1[n][n] = {0};
    int mn[n][n] = {0};
    
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < 2; ++j){
            cin >> tab[i][j];
        }
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < 2; ++j){
            cin >> tab1[i][j];
        }
    }
    cout << endl;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout << tab[i][j] + tab1[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout << tab[i][j] * 3 << "  ";
        }
        cout << endl;

    }
    cout << endl;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout << tab[i][0] * tab1[0][j] + tab[i][1] * tab1[1][j] << " ";
            
        }
        cout << endl;
    }
    
}