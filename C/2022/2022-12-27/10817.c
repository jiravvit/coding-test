#include <stdio.h>

int arr[3];
int big, small;

int main() {
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]); 
    for (int i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
        if (i) {
            if (arr[i] == arr[i-1]) {
                printf("%d\n", arr[i]);
                return 0;
            } 
        }
    }
    if (arr[0] == arr[2]) {
        printf("%d\n", arr[0]);
        return 0;
    }

    big = arr[0];
    big = big > arr[1] ? big : arr[1];
    big = big > arr[2] ? big : arr[2];

    small = arr[0];
    small = small < arr[1] ? small : arr[1];
    small = small < arr[2] ? small : arr[2];

    for (int i = 0; i < 3; i++) {
        if (!(arr[i]==big) && !(arr[i]==small)) printf("%d\n", arr[i]);
    }
}
