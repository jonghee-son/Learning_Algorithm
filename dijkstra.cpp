#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define INF 100000

class Graph {
    private:
        int V; 

        list<pair<int, int> >* adj;
 
    public:
        Graph(int V); 

        void addEdge(int u, int v, int w);

        void shortestPath(int s);
};

Graph::Graph(int V) {
    this->V = V;
    adj = new list<pair<int, int>>[V];
}

void Graph::addEdge(int u, int v, int w) {
    adj[u].push_back(make_pair(v, w));
}

void Graph::shortestPath(int src) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
 
    vector<int> dist(V, INF);
 
    pq.push(make_pair(0, src));
    dist[src] = 0;
 
    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
 
        list<pair<int, int> >::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i) {
            int v = (*i).first;
            int weight = (*i).second;

            if (dist[v] > dist[u] + weight) {
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }

    for (int i = 0; i < V; ++i) {
        if (dist[i] != INF) {
            cout << dist[i] << '\n';
        }
        else {
            cout << "INF" << '\n';
        }
    }
}

int main() {
    int node, edge, source;

    cin >> node >> edge;
    cin >> source;
    
    Graph gp(node);

    while(edge--) {
        int u, v, w;
        cin >> u >> v >> w;
        gp.addEdge(u - 1, v - 1, w);
    }

    gp.shortestPath(source - 1);

    return 0;
}