#include <stdio.h>

int n;

int main() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int k = n-1; i < k; k--) {
            printf(" ");
        }
        for (int j = i*2+1; 0 < j; j--) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 1; i < n; i++) {
        for (int k = 0; k < i; k++) {
            printf(" ");
        }
        for (int j = (n-i)*2-1; 0 < j; j--) {
            printf("*");
        }
        printf("\n");
    }
}
