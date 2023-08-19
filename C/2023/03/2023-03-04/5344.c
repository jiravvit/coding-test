#include <stdio.h>

int n;
int arr[2];

int gcd(int x, int y) {
    while(1) {
        int tmp = y;
        y = x%y;
        x = tmp;

        if (y==0) break;
    }
    return x;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &arr[0], &arr[1]);
        printf("%d\n", gcd(arr[0], arr[1]));
    }
   
}
