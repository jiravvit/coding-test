#include <stdio.h>

int main() {
    unsigned int n, fac = 1;
    scanf("%d", &n);

    for (int i = n; i > 0; i--) {
        fac *= i;
    }

    printf("%u\n", n == 0 ? 1 : fac);

    return 0;
}

