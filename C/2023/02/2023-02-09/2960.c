#include <stdio.h>

int n, k, cnt, arr[1005];
int i, j;

int main() {
    scanf("%d %d", &n, &k);

    int flag = 0;

    for (i = 2; i <= n; i++) {
        if (arr[i] == 1) continue;
        for (j = 1; j*i <= n; j++) {
            if (arr[j*i] == 0) cnt++;
            arr[j*i] = 1;
            if (cnt == k) flag = 1;
            if (flag) break; 
        }
        if (flag) break;
    }

    printf("%d\n", i *j);

}

