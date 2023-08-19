#include <stdio.h>

int n,m;

int main() {
    scanf("%d %d", &n, &m);
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = i+1;
    }

    for (int k = 0; k < m; k++) {
        int i = 0;
        int j = 0;
        scanf("%d %d", &i, &j);
        for (; i < j ;) {
            int tmp = arr[i-1];
            arr[i-1] = arr[j-1];
            arr[j-1] = tmp;
            i++;
            j--;
        } 
        /*for (int i = 0; i < n; i++) {*/
            /*printf("%d ", arr[i]);*/
        /*}*/
        /*printf("\n");*/
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
