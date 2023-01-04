#include <stdio.h>

int n,m;

int main() {
    scanf("%d %d\n", &n, &m);
    char arr[m];
    
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < m; i++) {
            scanf("%c", &arr[i]);
        }
        getchar();
        for (int j = m-1; 0 <= j; j--) {
            printf("%c", arr[j]);
        }
        putchar('\n');
    }
}
