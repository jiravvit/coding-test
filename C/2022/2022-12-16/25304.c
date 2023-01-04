#include <stdio.h>

int x, n;
int price;

int main() {
    scanf("%d\n%d", &x, &n);
    int arr[n];
    int brr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &arr[i], &brr[i]);        
    }
    for (int i = 0; i < n; i++) {
        price += arr[i] * brr[i];
    }

    printf("%s\n", price == x ? "Yes" : "No");
}
