#include <stdio.h>

int memo[31][31];
int n, k;

int main() {
    scanf("%d %d", &n, &k);

    memo[1][1] = 1;
    memo[2][1] = 1;
    memo[2][2] = 1;

    for (int i = 3; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            if (j == 1 || i == j) memo[i][j] = 1;
            else memo[i][j] = memo[i-1][j-1] + memo[i-1][j];
        }
    }

    printf("%d\n", memo[n][k]);
}
