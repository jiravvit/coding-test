#include <stdio.h>

int n, m;

void search(int arr[], int cnt, int n, int m) {
    if (cnt == m) {
        // print
        for (int i = 0; i < m; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        for (int i = 1; i <= n; i++) {
            int flag = 0;
            for (int j = 0; j < cnt; j++) {
                if (arr[j] == i) flag = 1;
            }
            if (!flag) {
                arr[cnt] = i;
                search(arr, cnt+1, n, m);
            }
        }
    } 

}

int main() {
    scanf("%d %d", &n, &m);
    int arr[m];

    search(arr, 0, n, m);    
}
