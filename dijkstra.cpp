#include <iostream>
using namespace std;
#include <limits.h>

int INF = 1000000;

int minDistance(int dist[], bool sptSet[], int node){
    int min = INF, minIndex;

    for (int i = 0; i < node; i++) {
        if (sptSet[i] == false && dist[i] < min) {
            min = dist[i];
            minIndex = i;
        }
    }

    return minIndex;
}

int main() {
    int node, branch, start;

    cin >> node >> branch;
    cin >> start;
    int arr[node][node] = {0,};

    while(branch--) {
        int u, v, w;
        cin >> u >> v >> w;
        arr[u - 1][v - 1] = w;
    }

    for (int k = 0; k < node; k++) {
        int dist[node];
        bool sptSet[node];

        for (int i = 0; i < node; i++) {
            dist[i] = INF;
            sptSet[i] = false;
        }

        dist[start - 1] = 0;

        for (int i = 0; i < node - 1; i++) {
            int minDist = minDistance(dist, sptSet, node);

            sptSet[i] = true;

            for (int j = 0; j < node; j++) {
                if (!sptSet[j] && arr[minDist][j] && dist[minDist] != INF && dist[minDist] + arr[minDist][j] < dist[j]) {
                    dist[j] = dist[minDist] + arr[minDist][j];
                }
            }
        }

        
        if (dist[k] == INF) {
            cout << "INF" << '\n';
        }
        else {
            cout << dist[k] << '\n';
        }
    }

    return 0;
}