#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct Graph {
    int V;
    int adj[MAX][MAX];
};

void initGraph(struct Graph* g, int V) {
    g->V = V;
    for (int i=0; i<V; i++)
        for (int j=0; j<V; j++)
            g->adj[i][j] = 0;
}

void addEdge(struct Graph* g, int u, int v) {
    g->adj[u][v] = 1;
    g->adj[v][u] = 1;
}

void BFS(struct Graph* g, int start) {
    int visited[MAX] = {0}, queue[MAX], front=0, rear=0;
    visited[start] = 1; queue[rear++] = start;
    while (front < rear) {
        int u = queue[front++];
        printf("%d ", u);
        for (int v=0; v<g->V; v++) {
            if (g->adj[u][v] && !visited[v]) {
                visited[v] = 1;
                queue[rear++] = v;
            }
        }
    }
}

void DFSUtil(struct Graph* g, int u, int visited[]) {
    visited[u] = 1;
    printf("%d ", u);
    for (int v=0; v<g->V; v++)
        if (g->adj[u][v] && !visited[v])
            DFSUtil(g, v, visited);
}

void DFS(struct Graph* g, int start) {
    int visited[MAX] = {0};
    DFSUtil(g, start, visited);
}

int main() {
    struct Graph g;
    initGraph(&g, 5);
    addEdge(&g, 0,1); addEdge(&g, 0,2); addEdge(&g, 1,3); addEdge(&g, 1,4);

    printf("BFS from 0: "); BFS(&g, 0); printf("\n");
    printf("DFS from 0: "); DFS(&g, 0); printf("\n");
    return 0;
}
