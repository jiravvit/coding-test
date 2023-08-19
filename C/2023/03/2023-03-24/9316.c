#include <stdio.h>

int n;
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Hello World, Judge %d!\n", i+1);
    }
}
