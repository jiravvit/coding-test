#include <stdio.h>

int n, cnt;

int main() {
    scanf("%d", &n);

    int recv = 1000 - n;

    cnt = recv / 500;
    recv %= 500;

    cnt += recv / 100;
    recv %= 100;

    cnt += recv / 50;
    recv %= 50;

    cnt += recv / 10;
    recv %= 10;

    cnt += recv / 5;
    recv %= 5;

    cnt += recv / 1;
    recv %= 1;

    printf("%d\n", cnt);
    
}