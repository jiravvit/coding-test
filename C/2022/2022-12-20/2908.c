#include <stdio.h>

char arr[2][3];

int main() {
    scanf("%c%c%c ", &arr[0][0], &arr[0][1], &arr[0][2]);
    scanf("%c%c%c", &arr[1][0], &arr[1][1], &arr[1][2]);

    if (arr[0][2] < arr[1][2]) {
        printf("%c%c%c\n", arr[1][2], arr[1][1], arr[1][0]);
    } else if (arr[0][2] > arr[1][2]) {
        printf("%c%c%c\n", arr[0][2], arr[0][1], arr[0][0]);
    } else {  // (arr[0][2] == arr[1][2]) {
       if (arr[0][1] < arr[1][1]) {
            printf("%c%c%c\n", arr[1][2], arr[1][1], arr[1][0]);
       } else if (arr[0][1] > arr[1][1]) {
            printf("%c%c%c\n", arr[0][2], arr[0][1], arr[0][0]);
       } else {
            if (arr[0][0] < arr[1][0]) {
                printf("%c%c%c\n", arr[1][2], arr[1][1], arr[1][0]);
            } else if (arr[0][0] > arr[1][0]) {
                printf("%c%c%c\n", arr[0][2], arr[0][1], arr[0][0]);
            } else return 0;
       } 
    }

    return 0;
}
