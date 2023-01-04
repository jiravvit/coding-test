#include <stdio.h>

int a,b,c;
int big;

int main() {
    while (1) {
        scanf("%d %d %d", &a, &b, &c);
        if (a==0 && b==0 && c==0) break;
        big = a;
        big = big > b ? big : b;
        big = big > c ? big : c;
        if (big == a) {
            if ((b*b+c*c)==(big*big)) printf("right\n");
            else printf("wrong\n");
        } else if (big == b) {
            if ((a*a+c*c)==(big*big)) printf("right\n");
            else printf("wrong\n");
        } else {
            if ((a*a+b*b)==(big*big)) printf("right\n");
            else printf("wrong\n");
        }
    }
}
