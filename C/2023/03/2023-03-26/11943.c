#include <stdio.h>

int a, b, c, d;

int main() {
    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);
    int s1 = a + d;
    int s2 = b + c;
    printf("%d\n", s1 > s2 ? s2 : s1);
}
