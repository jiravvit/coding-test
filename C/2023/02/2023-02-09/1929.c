#include <stdio.h>

int m, n;
int arr[1000001];

int main() {
    scanf("%d %d", &m, &n);
    
    arr[0] = 1;
    arr[1] = 1;
    /*arr[2] = 1;*/

    for (int i = 2; i <= n; i++) {
        if (arr[i] == 1) continue;
        for (int j = 2; j*i <= n; j++) {
            arr[j*i] = 1;
        }
    }

    for (int i = m; i <= n; i++) {
        if (arr[i] == 0) printf("%d\n", i);
        else continue;
    }
}

