#include <stdio.h>

int arr[9];
int cpy[9];

int main() {
    for (int i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < 9; i++) {
        cpy[i] = arr[i];
    }

    int tmp = 0;
    for (int i = 0; i < 9; i++) {
        for (int j = i+1; j < 9; j++) {
            if (cpy[i] > cpy[j]) {
                tmp = cpy[i];
                cpy[i] = cpy[j];
                cpy[j] = tmp;
            }
        }
    }

    for (int i = 0; i < 9; i++) {
        if (arr[i] == cpy[8]) {
            printf("%d\n%d\n", arr[i], i+1);
        }
    }

}

