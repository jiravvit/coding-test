#include <stdio.h>

int n, m;

int main() {
    scanf("%d %d", &n, &m);
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = 0;
    }

    for (int i = 0; i < m; i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c); 
        for (int j = a; j <= b; j++) {
            arr[j-1] = c; 
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
