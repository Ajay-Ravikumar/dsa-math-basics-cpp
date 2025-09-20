#include <bits/stdc++.h>
using namespace std;

void subsets(vector<int>& arr, int i, vector<int>& curr) {
    if (i == arr.size()) {
        for (int x : curr) cout << x << " ";
        cout << endl;
        return;
    }
    curr.push_back(arr[i]);
    subsets(arr, i+1, curr);
    curr.pop_back();
    subsets(arr, i+1, curr);
}

int main() {
    vector<int> arr = {1,2,3};
    vector<int> curr;
    subsets(arr, 0, curr);
}
