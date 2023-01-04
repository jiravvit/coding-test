#include <stdio.h>

int a, b, c;
int arr[10];

int main() {
    scanf("%d %d %d", &a, &b, &c);
    
    a = a*b*c;
    
    while (a != 0) {
        arr[a%10]++;
        a = a/10;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", arr[i]);
    }
}
