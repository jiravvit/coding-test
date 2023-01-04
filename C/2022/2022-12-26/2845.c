#include <stdio.h>

int l, p, n;
int arr[5];

int main() {
    scanf("%d %d", &l, &p);
    n = l * p;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]); 
        arr[i] = arr[i] - n;
    }

    for (int i = 0; i < 5; i++) 
        printf("%d ", arr[i]);

}
