#include <stdio.h>

int n, k;

int factorial(int n) {
    int result = 1;
    for (int i = n; i > 0; i--) {
        result *= i;
    }
    return result;
}

int main() {
    scanf("%d %d", &n, &k);
   
    printf("%d\n", factorial(n) / (factorial(k)*factorial(n-k)));
}
