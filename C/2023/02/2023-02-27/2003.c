#include <stdio.h>

int n, m;

int main() {
    scanf("%d %d", &n, &m);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int cnt = 0;
    int left = -1;
    int right = -1;
    int sum = 0;

    while (left <= right && right < n) {
        if (sum > m) {
            sum -= arr[++left];
        } else if (sum < m) {
            sum += arr[++right];
        } else if (sum == m) {
            cnt++;
            sum += arr[++right];
        }

    }

    printf("%d\n", cnt);
    
}
