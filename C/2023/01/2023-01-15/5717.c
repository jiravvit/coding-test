#include <stdio.h> 

int n,m;

int main() {
    while (1) {
        scanf("%d %d", &n, &m);
        if (n==0 && m==0) break;
        printf("%d\n", n+m);
    }
}
