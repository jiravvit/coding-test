#include <stdio.h>

int arr[6];
int peace[6] = {1, 1, 2, 2, 2, 8};

int main() {
    for (int i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < 6; i++) {
        arr[i] = peace[i] - arr[i];
    }

    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

}
