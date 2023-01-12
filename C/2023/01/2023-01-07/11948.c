#include <stdio.h>

int arr[4];
int brr[2];
int tmp, choice, sum;

int main() {
    for (int i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
        if (i == 1) {
            tmp = arr[0];
            tmp = tmp < arr[1] ? tmp : arr[i];
        } else if (1 < i) {
            tmp = tmp < arr[i] ? tmp : arr[i];
        }
    }
    /*printf("tmp %d\n", tmp);*/

    for (int j = 0; j < 2; j++) {
        scanf("%d", &brr[j]);
        if (j == 1) {
            choice = brr[0];
            choice = choice < brr[j] ? brr[j] : choice;
        }
    }

    /*printf("choice %d\n", choice);*/

    int cnt = 0;
    for (int k = 0; k < 4; k++) {
        if (arr[k] != tmp) {
            sum += arr[k];
            cnt++;
        }
    }

    if (cnt < 3) printf("%d\n", sum+(3-cnt)*tmp + choice);
    else printf("%d\n", sum+choice);
}
