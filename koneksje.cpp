#include <iostream>
#include <vector>

using namespace std;



int main() {
    int n, m, a, b, k;
    cin >> n >> m;
    bool t = false;
    
    vector<int> V[n+2];
    
    for(int i = 0; i < m; ++i){
        cin >> a >> b;
        V[a].push_back(b);
        V[b].push_back(a);
    }
    cin >> k;
    
    for(int i = 0; i < k; ++i){
        cin >> a >> b;
        for(int j = 0; j < V[a].size(); ++j){
            if(V[a][j] == b){
                cout << "TAK";
                cout << endl;
                t = true;
            }
        }
        if(t == false){
            cout << "NIE";
            cout << endl;    
        }
        t = false;
        
    }
    return 0;
}