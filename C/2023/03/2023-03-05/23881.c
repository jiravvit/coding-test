#include <stdio.h>

int n, k;
int max;
int idx;
int cnt;

int main() {
    scanf("%d %d", &n, &k);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);   
    }

    for (int i = n-1; 0 <= i; i--) {
        max = arr[0];
        idx = 0;
        for (int j = 1; j <= i; j++) {
            if (arr[j] > max) {
                max = arr[j];
                idx = j;
            }
        }
        /*printf("%d %d\n", arr[idx], arr[i]);*/
        if (arr[i] != arr[idx]) {
            int tmp = arr[i];
            arr[i] = arr[idx];
            arr[idx] = tmp;
            cnt++;
            /*printf("%d\n", cnt);*/
        }
        if (cnt == k) {
            printf("%d %d\n", arr[idx], arr[i]);
            return 0;
        }
    } 

    printf("-1\n");

}
