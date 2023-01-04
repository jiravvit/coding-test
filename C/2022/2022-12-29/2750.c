#include <stdio.h>

int n;

int main() {
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int tmp = 0;
    for (int i = 0; i < n-1; i++) {
        for (int j = i; j < n; j++) {
            if (arr[i] > arr[j]) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
}
