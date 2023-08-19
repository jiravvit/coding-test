#include <stdio.h>
#include <stdlib.h>

int n;

int compare(const void* a, const void* b) {
    if (*(int*)a > *(int*)b) return 1;
    else if (*(int*)a < *(int*)b) return -1;
    return 0;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int arr[10] = {};
        for (int i = 0; i < 10; i++) {
            scanf("%d", &arr[i]);
        }
        qsort(arr, 10, sizeof(int), compare);
        printf("%d\n", arr[7]);
    }
}
