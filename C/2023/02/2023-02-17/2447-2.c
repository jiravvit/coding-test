#include <stdio.h>

int n;

int star(int i, int j) {
    while(1) {
        if ((i%3)==1 && (j%3)==1) return 0; // space
        if (i==0 || j==0) return 1;
        i = i/3;
        j = j/3;
    }
}

int main() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (star(i,j)) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}
