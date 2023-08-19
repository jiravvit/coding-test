#include <stdio.h>

int sum;
int tmp;
int arr[102];

int main() {
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &tmp);
        sum += tmp;
        arr[tmp/10]++;
    }

    int max = arr[0];
    int a = 0;
    for (int i = 0; i < 100; i++) {
        if (max < arr[i]) {
            max = arr[i];
            a = i*10;
        }
    }

    printf("%d\n%d\n", sum/10, a);
}
