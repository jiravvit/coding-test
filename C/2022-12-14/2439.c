#include <stdio.h>

int n;

int main() {
    scanf("%d", &n);

    for (int i = n-1; i > -1; i--) {
        for (int j = n-i; j < n; j++ ) {
            printf(" ");
        }
        for (int k = n-i; k > 0; k--) {
            printf("*");
        }
        printf("\n");

    }

}

