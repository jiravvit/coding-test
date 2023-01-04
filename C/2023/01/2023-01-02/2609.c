#include <stdio.h>

int a, b, gcd;

int main() {
    scanf("%d %d", &a, &b);
    
    for (int i = 1; i<=a && i<=b; i++) {
        if (a%i==0 && b%i==0) gcd=i;
    }

    printf("%d\n%d\n", gcd, (a*b)/gcd);
    
}
