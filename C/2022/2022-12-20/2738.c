#include <stdio.h>

int n, m;

int main() {
    scanf("%d %d", &n, &m); 
    int arr[n][m];
    int brr[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++){
            scanf("%d", &brr[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++){
            printf("%d ", arr[i][j] + brr[i][j]);
        }
        printf("\n");
    }
}
