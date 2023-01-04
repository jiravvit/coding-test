#include <stdio.h>

int n;

int main() {
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < n-1; i++) {
        min = min < arr[i+1] ? min : arr[i+1];
        max = arr[i+1] < max ? max : arr[i+1];
    }

    printf("%d %d", min, max);
}
