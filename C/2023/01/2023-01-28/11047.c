#include <stdio.h>

int n, k;
int cnt;

int main() {
    scanf("%d %d", &n, &k);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = n-1; -1 < i; i--) {
        if (arr[i] > k) continue;
        else if (arr[i] <= k) {
            cnt += k / arr[i];
            k %= arr[i];
        }
    }
    
    printf("%d\n", cnt);
}