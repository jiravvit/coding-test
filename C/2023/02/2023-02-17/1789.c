#include <stdio.h>

unsigned long long n, s;

int main() {
    scanf("%llu", &s);
    
    unsigned long long i = 1;
    while (n < s) {
        n += i;
        i++;
    }
    if (n == s) printf("%llu\n", i-1);
    else printf("%llu\n", i-2);

}
