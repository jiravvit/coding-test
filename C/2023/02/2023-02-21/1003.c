#include <stdio.h>

int t;

void fibonacci(int n) {
    if (n == 0) {
        printf("%d %d\n", 1, 0);
    } else {
        int fibo[n+1][2];
        fibo[0][0] = 1;
        fibo[0][1] = 0;
        fibo[1][0] = 0;
        fibo[1][1] = 1;
    
        for (int i = 2; i < n+1; i++) {
            fibo[i][0] = fibo[i-1][0] + fibo[i-2][0];
            fibo[i][1] = fibo[i-1][1] + fibo[i-2][1];
        }
        printf("%d %d\n", fibo[n][0], fibo[n][1]);
    }
}

int main() {
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int n = 0;
        scanf("%d", &n);
        fibonacci(n);
    }  
}
