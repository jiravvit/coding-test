#include <stdio.h>

unsigned int n;

int factorial(int num)
{
    if (num <= 1) return 1;
 
    return num * factorial(num - 1);
}

int main() {
    scanf("%d", &n);
    unsigned int result = 1;
    result = factorial(n);
    /*for (int i = 1; i <= n; i++) {*/
        /*result *= i;*/
    /*}*/
    printf("%u\n", result);
}
