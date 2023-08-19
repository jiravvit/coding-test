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
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), compare);

    int tmp = 0;
    int result = 0;
    for (int i = 0; i < n; i++) {
        tmp += arr[i];
        result += tmp;
    }

    printf("%d\n", result);
}
