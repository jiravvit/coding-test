#include <stdio.h>

int arr[5];
int check;

int main() {
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++) {
        check = check + arr[i] * arr[i];
    }
    check = check%10;
    printf("%d\n", check);
}
