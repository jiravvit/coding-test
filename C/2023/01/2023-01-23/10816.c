#include <stdio.h>
#include <stdlib.h>

int n, m;

int compare(const void* a, const void* b) {
    if (*(int*)a > *(int*)b) return 1;
    else if (*(int*)a < *(int*)b) return -1;
    return 0;
}

int binsearch(int data[], int n, int key) {
    int low, high, mid;
    int cnt = 0;

    low = 0;
    high = n-1;

    while (low <= high) {
        mid = (low+high) / 2;
        if (key == data[mid]) {
            cnt++;
            continue;
        }
        else if (key < data[mid]) high = mid-1;
        else if (key > data[mid]) low = mid+1;
    }

    return cnt;
}

int main() {
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }

    qsort(arr, n, sizeof(int), compare);
    
    scanf("%d", &m);
    int brr[m];
    
    for (int i = 0; i < m; i++) {
        scanf("%d ", &brr[i]);
        printf("%d\n", binsearch(arr, n, brr[i]));
    }

    for (int i = 0; i < m; i++) {
        printf("%d ", brr[i]);
    }

}