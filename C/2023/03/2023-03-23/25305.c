#include <stdio.h>
#include <stdlib.h>
int n, k;

int compare(const void* a, const void* b) {
    if (*(int*)a > *(int*)b) return -1;
    else if (*(int*)a < *(int*)b) return 1;
    return 0;
}

int main() {
    scanf("%d %d", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), compare);
    
    printf("%d\n", arr[k-1]);
}
