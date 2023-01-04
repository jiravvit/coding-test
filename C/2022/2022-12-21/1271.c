#include <stdio.h>

unsigned long long n,m;

int main() {
    scanf("%llu %llu", &n, &m);
    printf("%llu\n%llu\n", n/m, n%m);
}
