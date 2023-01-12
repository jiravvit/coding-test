#include <stdio.h>

int n;

int compare(const void* a, const void* b) {
    if (*(int *)a > *(int *)b) return 1;
    else if (*(int *)a < *(int *)b) return -1;
    else return 0;
}

int main() {
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(arr[0]), compare);

    for (int j = 0; j < n; j++) {
        printf("%d\n", arr[j]);
    }
}

