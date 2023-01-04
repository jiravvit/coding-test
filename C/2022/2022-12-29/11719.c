#include <stdio.h>

char c;

int main() {
    while (scanf("%c", &c) != EOF) {
        printf("%c", c);
    }
}
