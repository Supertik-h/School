#include<iostream>
#include<vector>
using namespace std;


int main(){
    int s, k;
    int a, b;
    int n;
    
    cin >> s >> k;
    
    vector<int> V[s+1];
    
    for(int i = 1; i <= k; i++){
        cin >> a >> b;
        V[a].push_back(b);
        V[b].push_back(a);
    }
    
    cin >> n;
    
    int t[n];
    
    for(int i = 0; i < n; i++){
        cin >> t[i];    
    }
        
    
    for(int i = 0; i < n; i++){
        cout << V[t[i]].size() << ": ";a
        
        for(int j = 0; j < V[t[i]].size(); j++){
            cout << V[t[i]][j] << " ";
        }
        cout << endl;
    }
}