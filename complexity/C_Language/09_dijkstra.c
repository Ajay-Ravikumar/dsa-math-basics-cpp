#include <stdio.h>
#include <limits.h>

#define V 5

int minDistance(int dist[], int visited[]) {
    int min = INT_MAX, idx = -1;
    for (int v=0; v<V; v++)
        if (!visited[v] && dist[v] <= min) {
            min = dist[v]; idx = v;
        }
    return idx;
}

void dijkstra(int graph[V][V], int src) {
    int dist[V], visited[V] = {0};
    for (int i=0; i<V; i++) dist[i] = INT_MAX;
    dist[src] = 0;

    for (int count=0; count<V-1; count++) {
        int u = minDistance(dist, visited);
        visited[u] = 1;
        for (int v=0; v<V; v++) {
            if (!visited[v] && graph[u][v] && dist[u]!=INT_MAX &&
                dist[u]+graph[u][v] < dist[v])
                dist[v] = dist[u]+graph[u][v];
        }
    }

    for (int i=0; i<V; i++)
        printf("Node %d Distance %d\n", i, dist[i]);
}

int main() {
    int graph[V][V] = {
        {0,2,4,0,0},
        {2,0,1,7,0},
        {4,1,0,0,3},
        {0,7,0,0,1},
        {0,0,3,1,0}
    };
    dijkstra(graph, 0);
    return 0;
}
