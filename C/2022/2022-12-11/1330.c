#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);
    if (-10000 <= a && a <= 10000 && -10000 <= b && b <= 10000) {
        if (a > b) printf(">\n");
        else if (a < b) printf("<\n");
        else printf("==\n");
    }

    return 0;
}
