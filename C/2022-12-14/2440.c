#include <stdio.h>

int n;

int main() {
    scanf("%d", &n);

    for (int i = n; i > 0; i--) {
        for (int j = n-i; j < n; j++ ) {
            printf("*");
        }
        printf("\n");

    }

}

