#include <stdio.h>
#include <string.h>

int arr[30];
int brr[30] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};

int main() {
    for (int i = 0; i < 28; i++) {
        scanf("%d", &arr[i]);
    }

    int tmp = 0;
    for (int i = 0; i < 28; i++) {
        for (int j = 0; j < 27; j++) {
            if(arr[j] > arr[j+1]) {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }

    int c = 0;
    for (int i = 0; i < 30; i++) {
        if (arr[i] != brr[i]) {
            printf("%d\n", brr[i]);
            
            c++; // c 1 27 c 2 28
            for (int j = 26+c; j >= i; j--) {
                arr[j+1] = arr[j];
            }
            
            arr[i] = brr[i]; 
        }
    }

}
