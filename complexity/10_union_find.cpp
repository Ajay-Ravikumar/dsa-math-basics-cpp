#include <bits/stdc++.h>
using namespace std;

class UnionFind {
    vector<int> parent, rank;
public:
    UnionFind(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        iota(parent.begin(), parent.end(), 0);
    }

    int find(int x) {
        if (x != parent[x])
            parent[x] = find(parent[x]); // path compression
        return parent[x];
    }

    void unite(int x, int y) {
        int rx = find(x), ry = find(y);
        if (rx == ry) return;
        if (rank[rx] < rank[ry]) parent[rx] = ry;
        else if (rank[rx] > rank[ry]) parent[ry] = rx;
        else {
            parent[ry] = rx;
            rank[rx]++;
        }
    }
};

int main() {
    UnionFind uf(5);
    uf.unite(0,1);
    uf.unite(1,2);
    cout << (uf.find(0) == uf.find(2)) << endl; // 1 (true)
    cout << (uf.find(0) == uf.find(3)) << endl; // 0 (false)
}
