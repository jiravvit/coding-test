#include <stdio.h>

int a, b;
int arr[5];

int main() {
    scanf("%d", &a);

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == a) b++;
    }

    printf("%d\n", b);
}
