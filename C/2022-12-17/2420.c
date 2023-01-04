#include <stdio.h>
#include <stdlib.h>

long long n,m;

int main() {
    scanf("%lld %lld", &n, &m);

    printf("%lld\n", llabs(n-m));

}
