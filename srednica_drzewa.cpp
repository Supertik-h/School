#include <bits/stdc++.h> 

using namespace std;

vector<int> graf[100007];
int max_depth, farthest_node;
bool visited[100007]; 

void find_farthest(int v, int depth = 0){
    visited[v] = true;

    if(depth > max_depth){
        farthest_node = v;
        max_depth = depth;
    }

    for(int s : graf[v]){
        if(visited[s]) continue;
        find_farthest(s, depth+1);
    }

}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, a, b;
   


    cin >> n;

    for(int i = 0; i < n-1; ++i){
        cin >> a >> b;
        graf[a].push_back(b);
        graf[b].push_back(a);
    }
    max_depth = 0;
    find_farthest(1);
    

    fill(visited+1, visited+n+1, 0);
    find_farthest(farthest_node);

    cout << max_depth+1;


   


    return 0;
}