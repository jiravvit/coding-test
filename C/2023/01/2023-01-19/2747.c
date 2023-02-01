#include <stdio.h>

int n;
int mem[100];

int fibo(int n) {
    if (n <= 2) return 1;
    if (mem[n] != 0) {
        return mem[n];
    } else {
        mem[n] = fibo(n-2) + fibo(n-1);
        return mem[n];
    }
}

int main() {
    scanf("%d", &n);
    printf("%d\n", fibo(n));
}