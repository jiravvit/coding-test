#include <stdio.h>

int t;

int main() {
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int coin = 0;
        int tmp = 0;
        scanf("%d", &coin);

        printf("%d ", coin/25);
        tmp = coin % 25;
        printf("%d ", tmp/10);
        tmp %= 10;
        printf("%d ", tmp/5);
        tmp %= 5;
        printf("%d\n", tmp/1);
    }
}
