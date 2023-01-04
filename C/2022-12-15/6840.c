#include <stdio.h>

int a, b, c;

void swap(int *a, int *b) {
    int tmp = 0;
    tmp = *a;
    *a = *b;
    *b = tmp;
}


int main() {
    scanf("%d\n%d\n%d", &a, &b, &c);
    
    if (a > b) swap(&a,&b);
    if (b > c) swap(&b, &c);
    if (a > b) swap(&a, &b);
    printf("%d\n", b);    
}

