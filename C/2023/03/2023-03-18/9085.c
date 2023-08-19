#include <stdio.h>

int t, n;

int main() {
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        int arr[n];
        int sum = 0;
        for (int j = 0; j < n; j++) {
            int tmp = 0;
            scanf("%d", &tmp);
            sum += tmp;
        }
        printf("%d\n", sum);
    }
}
