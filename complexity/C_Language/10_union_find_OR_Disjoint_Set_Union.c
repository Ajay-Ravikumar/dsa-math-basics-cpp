#include <stdio.h>

#define N 5

int parent[N], rankArr[N];

void makeSet() {
    for (int i=0; i<N; i++) {
        parent[i] = i;
        rankArr[i] = 0;
    }
}

int find(int x) {
    if (x != parent[x])
        parent[x] = find(parent[x]);
    return parent[x];
}

void unite(int x, int y) {
    int rx = find(x), ry = find(y);
    if (rx == ry) return;
    if (rankArr[rx] < rankArr[ry]) parent[rx] = ry;
    else if (rankArr[rx] > rankArr[ry]) parent[ry] = rx;
    else {
        parent[ry] = rx;
        rankArr[rx]++;
    }
}

int main() {
    makeSet();
    unite(0,1); unite(1,2);
    printf("%d\n", find(0) == find(2)); // 1
    printf("%d\n", find(0) == find(3)); // 0
    return 0;
}
