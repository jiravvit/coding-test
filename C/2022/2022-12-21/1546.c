#include <stdio.h>

int n, m;

int main() {
    scanf("%d", &n);
    double arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }

    double big = arr[0];
    for (int i = 1; i < n; i++) {
        big = big > arr[i] ? big : arr[i];
    }

    for (int i = 0; i < n; i++) {
        arr[i] = arr[i]/big*100;
    }

    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];  
    }

    printf("%lf\n", sum/n);
}
