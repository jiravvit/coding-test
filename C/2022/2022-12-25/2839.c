#include <stdio.h>

int n, out, ch;

int main() {
    scanf("%d", &n);

    if (n==4 || n==7) {
        printf("-1\n");
        return 0;
    }

    while (n%5) {
        n -= 3;
        out += 1;
    }
    out += n/5;

    printf("%d\n", out);

    return 0;
}

