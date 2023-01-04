#include <stdio.h>

long long a, b;

long long cal(long long a, long long b) {
    long long c = 0;
    c = (a+b) * (a-b);
    return c;
}

int main() {
    scanf("%lld %lld", &a, &b);
    printf("%lld", cal(a, b));    
}
