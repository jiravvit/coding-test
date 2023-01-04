#include <stdio.h>

int k, n, m;

int main() {
    scanf("%d %d %d", &k, &n, &m);

    printf("%d\n", k*n-m > 0 ? k*n-m : 0);
}

