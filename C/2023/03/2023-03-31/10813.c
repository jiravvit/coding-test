#include <stdio.h> 

int n, m;

int main() {
    scanf("%d %d", &n, &m);
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = i+1;
    }
    
    for (int i = 0; i < m; i++) {
        int a = 0;
        int b = 0;
        
        scanf("%d %d", &a, &b);
        int tmp = arr[a-1];
        arr[a-1] = arr[b-1];
        arr[b-1] = tmp;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
