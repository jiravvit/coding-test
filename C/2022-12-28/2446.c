#include <stdio.h>

int n;

int main() {
    scanf("%d", &n);

    int tmp = 0;
    for (int i = n-1; 0 <= i; i--) {
        for (int k = 0; k < tmp; k++) {
            printf(" ");
        }
        tmp++;
        for (int j = i*2+1; 0 < j; j--) {
            printf("*");    
        }
        printf("\n");
    }

    int tmp2 = n;
    for (int i = 1; i < n; i++) {
        for (int k = tmp2-2; 0 < k; k--) {
            printf(" ");
        }
        tmp2--;
        for (int j = 0; j < i*2+1; j++) {
            printf("*");
        } 
        printf("\n");
    }
}
