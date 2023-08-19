#include <stdio.h>

int n;
int sum;

int main() {
    scanf("%d", &n);
    if (n/100 == 0) {
        sum = n/10 + n%10;
    } else {
        if (n%10 == 0) {
            sum = n/100 + n%100;
        } else {
            sum = n/10 + n%100;
        }
    }
    
    printf("%d\n", sum);
}
