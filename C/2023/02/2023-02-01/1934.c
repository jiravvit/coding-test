#include <stdio.h>

int n;
int a, b, gcd;

int main() {
    scanf("%d", &n);

    for (int j = 0; j < n; j++) {
        scanf("%d %d", &a, &b);

        for (int i = 1; i<=a && i<=b; i++) {
            if (a%i==0 && b%i==0) gcd=i;
        }

        printf("%d\n", (a*b)/gcd);
    }
}
