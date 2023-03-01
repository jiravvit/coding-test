#include <stdio.h>

int n;
int memo[1000001];

int min(int a, int b) {
    return a > b ? b : a;
}

int solve(int n) {
    memo[0] = 0;
    memo[1] = 0;
    for (int i = 2; i <= n; i++) {
        memo[i] = memo[i-1] + 1;
        if (i % 2 == 0)
            memo[i] = min(memo[i/2] + 1, memo[i]);
        if (i % 3 == 0)
            memo[i] = min(memo[i/3] + 1 , memo[i]);
    } 
    return memo[n];
}

int main() {
    scanf("%d", &n);
    printf("%d\n", solve(n)); 
}
