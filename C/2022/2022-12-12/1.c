#include <stdio.h>

int main() {

    int a = 10;
    printf("%d\n", !(a%2) && !(a%3));
    return 0;
}

