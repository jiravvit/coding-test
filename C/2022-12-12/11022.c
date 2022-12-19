#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    int a,b;
    for (int i = 0; i < T; i++) {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d + %d = %d\n", i+1, a, b, a+b);
    }

    return 0;
}
