#include <stdio.h>

int n;

int main() {
    scanf("%d", &n);
    int arr[n];
    int cnt = n;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 1) cnt--;
        for (int j = 2; j < arr[i]-1; j++) {
            if (!(arr[i]%j)) {
                cnt--;
                break;
            }
        }
    }

    printf("%d\n", cnt);
}   
