#include <stdio.h>

int n;

int main() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int k = n-1; i < k; k--) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}
