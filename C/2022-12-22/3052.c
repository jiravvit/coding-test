#include <stdio.h>

int arr[10];
int brr[10];

int main() {
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        arr[i] = arr[i]%42;
    }
    
    int cnt = 0;
    for (int i = 0; i < 10; i++) {
        if (arr[i] == -1) continue;
        for (int j = i+1; j < 10; j++) {
            if (arr[i] == arr[j]) {
                cnt++;
                arr[j] = -1;
            } 
        }
    }

    printf("%d\n", 10-cnt);

}
