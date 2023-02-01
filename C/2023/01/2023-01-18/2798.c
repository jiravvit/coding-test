#include <stdio.h>

int n, m;

int main() {
    scanf("%d %d", &n, &m);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int cnt = 0;
    int tmp = 0;
    for (int i = 0; i < n-2; i++) {
        for (int j = i+1; j < n-1; j++) {
            for (int k = j+1; k < n; k++) {
                int s = arr[i] + arr[j] + arr[k];
                if ((s<=m) && (tmp<s)) {
                    tmp = s;    
                }
            }
        }
    }
    printf("%d\n", tmp);
}