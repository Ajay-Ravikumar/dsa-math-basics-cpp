#include <stdio.h>
int binarySearch(int arr[], int l, int r, int x) {
    if(l > r) return -1;
    int mid = l + (r-l)/2;
    if(arr[mid] == x) return mid;
    else if(arr[mid] > x) return binarySearch(arr, l, mid-1, x);
    else return binarySearch(arr, mid+1, r, x);
}

int main() {
    int n,x; scanf(\"%d %d\", &n, &x);
    int arr[n];
    for(int i=0;i<n;i++) scanf(\"%d\", &arr[i]);
    printf(\"%d\\n\", binarySearch(arr, 0, n-1, x));
    return 0;
}
