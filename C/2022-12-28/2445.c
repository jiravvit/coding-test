#include <stdio.h>

int n;

int main() {
    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        for (int k = (n-i)*2; 0 < k; k--) {
            printf(" ");
        }    
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < n*2; i++) printf("*");
    printf("\n");

    for (int i = 1; i < n; i++) {
        for (int j = n-i; 0 < j; j--) {
            printf("*");
        }
        for (int k = i*2; 0 < k; k--) {
            printf(" ");
        } 
        for (int j = n-i; 0 < j; j--) {
            printf("*");
        }
        printf("\n");
    }
}
