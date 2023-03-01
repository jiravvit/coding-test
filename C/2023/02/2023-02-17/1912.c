#include <stdio.h>
#define max(x,y) x > y ? x : y
int n;

int main() {
    scanf("%d", &n);
    int arr[n];
    int dp[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int ret = arr[0];
    dp[0] = arr[0];

    for (int i = 1; i < n; i++) {
        dp[i] = max(dp[i-1]+arr[i], arr[i]);
        ret = max(dp[i], ret);
    }

    printf("%d\n", ret);
}
