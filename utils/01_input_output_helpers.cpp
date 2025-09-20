#include <bits/stdc++.h>
using namespace std;

// Reads n integers into a vector
vector<int> readVector(int n) {
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    return v;
}

// Prints a vector of integers
void printVector(const vector<int>& v) {
    for (int x : v) cout << x << " ";
    cout << "\n";
}

int main() {
    int n; 
    cin >> n;
    vector<int> v = readVector(n);
    printVector(v);
    return 0;
}
