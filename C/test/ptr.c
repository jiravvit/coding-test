#include <stdio.h>

int main() {
    int a = 10;
    int *ptr = &a;
    int *ptr2 = ptr;

    printf("%p %d\n", ptr, *ptr);
    printf("%p\n", ptr2);

    *ptr2 = 20;
    printf("%p %d\n", ptr2, *ptr2);

    for (int i = 2; i < 18; ++i) {
        printf("%d\n", i);
    }
}
