#include <stdio.h>
#include <stdlib.h>

int n, l;

int compare(const void* a, const void* b) {
    if (*(int*)a > *(int*)b) return 1;
    else if (*(int*)a < *(int*)b) return -1;
    return 0;
}

int main() {
    scanf("%d %d", &n, &l);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), compare);

    for (int i = 0; i < n; i++) {
        if (arr[i] <= l) l++;
        else break;
    }

    printf("%d\n", l);
}
