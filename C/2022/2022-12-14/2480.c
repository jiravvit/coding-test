#include <stdio.h>

int a,b,c;
int bounty;

int main() {

    scanf("%d %d %d", &a, &b, &c);

    if (a == b && a == c) bounty = 10000 + a * 1000;
    else if (a == b || a == c) bounty = 1000 + a * 100; 
    else if (b == c) bounty = 1000 + b * 100; 
    else if (a > b && a > c) bounty = a * 100;
    else if (b > a && b > c) bounty = b * 100;
    else if (c > a && c > b) bounty = c * 100;

    printf("%d\n", bounty);

    return 0;
}

