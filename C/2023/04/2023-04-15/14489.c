#include <stdio.h>

long a, b, n;

int main() {
    scanf("%ld %ld", &a, &b);
    scanf("%ld", &n);

    printf("%ld\n", a+b >= n*2 ? a+b-n*2 : a+b);
}
