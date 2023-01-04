#include <stdio.h>

int main() {
    int n, fac = 1;
    scanf("%d", &n);
    
    for (int i = n; i > 0; i--) {
        fac *= i;    
    }

    printf("%d\n", n == 0 ? 1 : fac);

    return 0;
}

