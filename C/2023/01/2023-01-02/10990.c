#include <stdio.h>

int n;

int main() {
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int k = n-i; 0 < k; k--) {
            printf(" ");
        } 
        for (int j = 0; j < 2*i-1; j++) {
            if (0<j && j<2*i-2) printf(" ");
            else printf("*");
        } 
        printf("\n");
    }
}
