#include<iostream>
#include<vector>
#include<queue>


using namespace std;

int d_t[1001];

bool odw[1001] = {};
vector<int> v[1001];

void DFS(int p) {
    odw[p] = true;
    for (int i = 0; i < v[p].size(); i++){
        
        int s = v[p][i];
        if (!odw[s]){
            d_t[s] = d_t[p]+1;
            DFS(s);
        }
    }
}





int main(){
    
   int n, m, a, b, M = 0;
   cin >> n >> m;
    
    for(int i = 1; i <= m; i++){
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    
    DFS(1);
    for(int i = 1; i<=n;i++){
        M = max(d_t[i], M);
    }
    cout << M << endl;
    
    
    
    
    
    return 0;
    
    
    
}