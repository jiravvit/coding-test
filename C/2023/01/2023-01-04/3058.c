#include <stdio.h>

int n, idx, s;
int num[7];
int arr[7];

int main() {
    scanf("%d", &n);
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < 7; i++) {
            scanf("%d", &num[i]);
            if (num[i]%2==0) arr[idx++] = num[i];
        }
        s = arr[0];
        int tmp = 0;
        int sum = 0;
        for (int i = 0; arr[i] != 0; i++) {
            sum += arr[i];
            if (s > arr[i]) s = arr[i];
            arr[i] = 0;
        }   
        printf("%d %d\n", sum, s);   
        idx = 0;
    }
}
