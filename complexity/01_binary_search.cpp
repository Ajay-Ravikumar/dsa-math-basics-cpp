#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& arr, int x) {
    int l = 0, r = arr.size() - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x) return mid;
        if (arr[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9};
    cout << binarySearch(arr, 7) << endl; // Output: 3
}
