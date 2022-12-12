#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%.10f\n", (double)a / (double)b);

    return 0;
}
