#include <iostream>
#include <vector>
using namespace std;


int bfs(int start, int end, const vector<vector<int>>& graph, int n) {
    vector<bool> visited(n + 1, false);
    vector<pair<int, int>> queue;
    queue.push_back({start, 0});
    visited[start] = true;

    int front = 0;

    while (front < queue.size()) {
        int city = queue[front].first;
        int distance = queue[front].second;
        front++;

        if (city == end) return distance;

        for (int neighbor : graph[city]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                queue.push_back({neighbor, distance + 1});
            }
        }
    }
    return -1;
}

int main() {
    int N, K;
    cin >> N >> K;

    vector<vector<int>> graph(N + 1);

  
    for (int i = 0; i < K; i++) {
        int city1, city2;
        cin >> city1 >> city2;
        graph[city1].push_back(city2);
        graph[city2].push_back(city1);
    }

    int P;
    cin >> P;

    vector<pair<int, int>> cityPairs(P);
    for (int i = 0; i < P; i++) {
        cin >> cityPairs[i].first >> cityPairs[i].second;
    }
  
    for (const auto& pair : cityPairs) {
        int start = pair.first;
        int end = pair.second;
        int distance = bfs(start, end, graph, N);
        cout << distance << endl;
    }

  