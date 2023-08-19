#include <stdio.h>

int n;
int a = 1, b = 1, P = 1000000007;

int main() {
    scanf("%d", &n);

    for (int i = 3; i <= n; i++) {
        int tmp = a;
        a = b; 
        b = (b + tmp) % P;
    }

    printf("%d %d", b, n-2);
}
