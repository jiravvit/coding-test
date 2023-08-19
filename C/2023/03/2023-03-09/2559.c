#include <stdio.h>

int n,k;

int main() {
    scanf("%d %d", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    int max = 0;
    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }

    max = sum;
    for (int i = k; i < n; i++) {
        sum += arr[i];
        sum -= arr[i-k];
        if (sum > max) {
            max = sum;
        }
    }

    printf("%d\n", max);

}
