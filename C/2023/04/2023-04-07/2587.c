#include <stdio.h>
#include <stdlib.h>

int arr[5];
int sum;

int compare(const void* a, const void* b) {
    if (*(int*)a > *(int*)b) return 1;
    else if (*(int*)a < *(int*)b) return -1;
    return 0;
}

int main() {
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    qsort(arr, 5, sizeof(int), compare);

    printf("%d\n%d\n", sum/5, arr[2]);
}