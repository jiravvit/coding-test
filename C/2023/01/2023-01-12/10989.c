#include <stdio.h>

int n;
int arr[10000];

int main() {
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        int tmp = 0;
        scanf("%d", &tmp);
        arr[tmp-1]++;
    }

    for (int j = 0; j < 10000; j++) {
        if (arr[j] == 0) continue;
        else {
            while (0 < arr[j]) {
                printf("%d\n", j+1);
                arr[j]--;
            }
        }
    }   

}
