#include <stdio.h>

void printArray(int* arr, int n, const char* sep) {
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i + 1 < n) printf("%s", sep);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n, " "); // prints: 1 2 3 4 5
    return 0;
}
