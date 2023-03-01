#include <stdio.h>
#include <stdlib.h>

int arr[11];
int n;
int len;

int compare(const void* a, const void* b) {
    if (*(int*)a < *(int*)b) return 1;
    else if (*(int*)a > *(int*)b) return -1;
    return 0;
}

int main() {
    scanf("%d", &n);

    while(1) {
        arr[len] = n % 10;
        ++len;
        n = n / 10;
        if (!n) break;
    }

    qsort(arr, len, sizeof(int), compare);
    
    for (int i = 0; i < len; i++) {
        printf("%d", arr[i]);
    }
}
