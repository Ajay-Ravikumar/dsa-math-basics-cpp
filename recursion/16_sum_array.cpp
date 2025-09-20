#include <bits/stdc++.h>
using namespace std;

int sumArray(vector<int>& arr, int n) {
    if (n == 0) return 0;
    return arr[n-1] + sumArray(arr, n-1);
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    cout << sumArray(arr, n) << "\n";
    return 0;
}
