#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);
    if(1<=a && b <=10000) {
        printf("%d\n", a+b);
        printf("%d\n", a-b);
        printf("%d\n", a*b);
        printf("%d\n", a/b);
        printf("%d\n", a%b);
    }

    return 0;
}
