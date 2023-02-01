#include <stdio.h>

int n;
int n1, n2, n3;
int cnt;

int main() {
    scanf("%d", &n);

    if (n < 100) {
        printf("%d\n", n);
    } else if (100<=n && n<1000) {
        for (int i = 100; i <= n; i++) {
            n3 = i/100; 
            n2 = (i%100)/10;
            n1 = i%10;
            if ((n3-n2) == (n2-n1)) cnt++;
        }
        printf("%d\n", 99+cnt);
    } else if (n==1000) {
        printf("%d\n", 144);
    }

}