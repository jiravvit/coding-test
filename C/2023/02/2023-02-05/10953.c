#include <stdio.h>

int n;
int a, b;

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d,%d", &a, &b);
        printf("%d\n", a+b);
    }
}
