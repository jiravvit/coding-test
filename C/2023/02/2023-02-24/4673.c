#include <stdio.h>

int n;
int arr[10000];
int j;

int main() {
    
    for (int i = 1; i < 101; i++) {
        int selfnum = 0;
        if (i < 10) {
            selfnum = i + i;  
            if (selfnum < 10) {
                arr[j] = selfnum;
                j++;
            }                     
            selfnum = 0;
        } else if (10 <= i && i < 100) {
            selfnum = i + i/10 + i%10;
            if (selfnum < 100) {
                arr[j] = selfnum;
                j++;
            }
            selfnum = 0;
        } else if (100 <= i && i < 1000) {

        } else if (1000 <= i && i < 10000) {

        }
    }

    int brr[100];
    for (int i = 0; i < 100; i++) {
        brr[i] = i+1;
    }
    /*for (int i = 0; arr[i] != 0; i++) {*/
        /*printf("%d\n", arr[i]);*/
    /*}*/

    for (int i = 0; i < 100; i++) {
        for (int j = 1; j < 101; j++) {
            if (j != arr[i]) printf("%d\n", j);
            if (j == arr[i]) break;
        }
    }
}   
