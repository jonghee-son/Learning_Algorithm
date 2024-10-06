#include <bits/stdc++.h>
using namespace std;

vector<int> graph[1001];
bool visited[1001];

void dfs(int start) {
    visited[start] = true;
    cout << start << ' ';
    
    for (int i = 0; i < graph[start].size(); i++) {
        int next_vertex = graph[start][i];
        if (visited[next_vertex] != true) {
            dfs(next_vertex);
        }
    }
}

void bfs(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = true;
    
    while (!q.empty()) {
        int next_vertex = q.front();
        q.pop();
        cout << next_vertex << ' ';
        
        for (int i = 0; i < graph[next_vertex].size(); i++) {
            if (visited[graph[next_vertex][i]] != true) {
                q.push(graph[next_vertex][i]);
                visited[graph[next_vertex][i]] = true;
            }
        }
    }
}

int main(void) {
    int n = 0, m = 0, v = 0;
    
    cin >> n >> m >> v;
        
    for (int i = 0; i < m; i++) {
        int v1 = 0, v2 = 0;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    for (int i = 1; i <= n; i++) {
        sort(graph[i].begin(), graph[i].end());
    }
    
    dfs(v);
    memset(visited, false, sizeof(visited));
    cout << '\n';
    bfs(v);
    
    return 0;
}

