#include <bits/stdc++.h>
using namespace std;

template <typename T>
void printVector(const vector<T>& v, string sep = " ") {
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i + 1 < v.size()) cout << sep;
    }
    cout << "\n";
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    printVector(v); // prints: 1 2 3 4 5
    return 0;
}
