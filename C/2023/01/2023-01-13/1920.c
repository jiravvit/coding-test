#include <stdio.h>
#include <stdlib.h>

int n, m;

int compare(const void* a, const void* b);
int binsearch(int data[], int n, int key);

int main() {
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), compare);
    
    /*for (int j = 0; j < n; j++) {*/
        /*printf("%d ", arr[j]);*/
    /*}*/

    scanf("%d", &m);
    for (int j = 0; j < m; j++) {
        int key = 0;
        scanf("%d", &key);
        printf("%d\n", binsearch(arr, n, key));
    }
    /*scanf("%d", &m);*/
    /*for (int j = 0; j < m; j++) {*/
        /*int tmp = 0;*/
        /*scanf("%d", &tmp);*/
    
    /*}*/

}

int compare(const void* a, const void* b) {
    if (*(int*)a > *(int*)b) return 1;
    else if (*(int*)a < *(int*)b) return -1;
    return 0;
}

int binsearch(int data[], int n, int key) {
    int low, high, mid;

    low = 0;
    high = n-1;

    while (low <= high) {
        mid = (low+high) / 2;
        if (key == data[mid]) return 1;
        else if (key < data[mid]) high = mid-1;
        else if (key > data[mid]) low = mid+1;
    }

    return 0;
}

