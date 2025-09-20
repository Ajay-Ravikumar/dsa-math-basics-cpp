#include <stdio.h>
#include <stdlib.h>

int* readArray(int n) {
    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    return arr;
}

void printArray(int* arr, int n) {
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int n; 
    scanf("%d", &n);
    int* arr = readArray(n);
    printArray(arr, n);
    free(arr);
    return 0;
}
