#include <stdio.h>

int n, v;
int cnt;

int main() {
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &v);
    for (int i = 0; i < n; i++) {
        if (v == arr[i]) cnt++;
    }

    printf("%d\n", cnt);
}

