#include <stdio.h>

int n;

int main() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int k = n; i < k-1; k--) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }   

    for (int i = 0; i < n-1; i++) {
        for (int k = -1; k < i; k++) {
            printf(" ");
        }  
        for (int j = n-1; i < j; j--) {
            printf("*");
        }
        printf("\n");
    } 
}