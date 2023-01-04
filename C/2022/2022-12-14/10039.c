#include <stdio.h>

int a, b, c, d, e;

int scoring(int a) {
    scanf("%d", &a);
    if (a < 40) return 40;
    else return a; 
}

int main() {
    printf("%d\n", (scoring(a)+scoring(b)+scoring(c)+scoring(d)+scoring(e))/5);
}

