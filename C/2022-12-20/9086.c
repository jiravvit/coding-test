#include <stdio.h>
#include <string.h>

int t;

int main() {
    scanf("%d", &t);
    char arr[1001];

    for (int i = 0; i < t; i++) {
        scanf("%s", arr);
        printf("%c%c\n", arr[0], arr[strlen(arr)-1]);
        memset(arr, 0, sizeof(int) * strlen(arr));
    }
}
