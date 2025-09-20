#include <bits/stdc++.h>
using namespace std;

class Graph {
    int V;
    vector<vector<int>> adj;
public:
    Graph(int v) { V = v; adj.resize(V); }

    void addEdge(int v, int w) {
        adj[v].push_back(w);
        adj[w].push_back(v); // undirected
    }

    void BFS(int s) {
        vector<bool> visited(V, false);
        queue<int> q;
        visited[s] = true;
        q.push(s);

        while (!q.empty()) {
            int u = q.front(); q.pop();
            cout << u << " ";
            for (int v : adj[u]) {
                if (!visited[v]) {
                    visited[v] = true;
                    q.push(v);
                }
            }
        }
    }

    void DFSUtil(int u, vector<bool>& visited) {
        visited[u] = true;
        cout << u << " ";
        for (int v : adj[u]) {
            if (!visited[v]) DFSUtil(v, visited);
        }
    }

    void DFS(int s) {
        vector<bool> visited(V, false);
        DFSUtil(s, visited);
    }
};

int main() {
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,3);
    g.addEdge(1,4);

    cout << "BFS from 0: "; g.BFS(0); cout << endl;
    cout << "DFS from 0: "; g.DFS(0); cout << endl;
}
