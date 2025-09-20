#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& arr, int l, int r, int x) {
    if (l > r) return -1;
    int mid = l + (r - l) / 2;
    if (arr[mid] == x) return mid;
    else if (arr[mid] > x) return binarySearch(arr, l, mid-1, x);
    else return binarySearch(arr, mid+1, r, x);
}

int main() {
    int n, x; cin >> n >> x;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    cout << binarySearch(arr, 0, n-1, x) << "\n";
    return 0;
}
