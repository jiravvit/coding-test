#include <stdio.h>
#include <stdlib.h>

int n;

int compare(const void* a, const void* b) {
    if (*(int*)a > *(int*)b) return -1;
    else if (*(int*)a < *(int*)b) return 1;
    return 0;
}
int compare2(const void* a, const void* b) {
    if (*(int*)a > *(int*)b) return 1;
    else if (*(int*)a < *(int*)b) return -1;
    return 0;
}

int main() {
    scanf("%d", &n);
    
    int arr[n];
    int brr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &brr[i]);
    }

    qsort(arr, n, sizeof(int), compare);
    qsort(brr, n, sizeof(int), compare2);
   
    int sum = 0; 
    for (int i = 0; i < n; i++) {
        sum += arr[i] * brr[i];
    }
    
    printf("%d\n", sum);
}
