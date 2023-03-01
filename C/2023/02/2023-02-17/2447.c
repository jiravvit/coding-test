#include <stdio.h>

int n;

void func(int i, int j, int n) {
    if ( ((i/n)%3)==1 && ((j/n)%3)==1 ) {
        printf(" ");
    } else {
        /*if (n/3<=i && i<(2*n)/3 && n/3<=j && j<(2*n)/3) {*/
            /*printf(" ");*/
        /*} else printf("*");*/
        if (n/3 == 0) printf("*");
        else func(i, j, n/3);        
    }
}

int main() {
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            func(i, j, n);
        }
        printf("\n");
    }
}
